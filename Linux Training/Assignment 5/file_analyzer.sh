#!/bin/bash
Log="error.log"
log_write(){
	echo "[`date`] ERROR: $1 " | tee -a "$Log"
}
recur_dir(){
	local dir=$1
	local keyword=$2
	if [[ ! -d "$dir" ]]; then
		log_write "Error: Directory $dir does not exist."
		return 1
	fi
	for file in "$dir"/*; do
		if [[ -d "$file" ]]; then
			recur_dir "$file" "$keyword"
		elif [[ -f "$file" ]]; then
			if grep -q "$keyword" "$file" 2>/dev/null; then
				echo "Match found in: $file"
			fi
		fi
	done
}

show_help(){
	cat <<EOF
Usage: $0 [OPTIONS]

Options:
	-d <directory> Search recursively in a directory for the keyword
	-f <file>      Seach for a keyword in a specific file
	-k <keyword>   Keyword to search for
	--help         Display this help message
EOF
}

while getopts "d:f:k:-:" opt; do
	case "$opt" in
		d) dir="$OPTARG" ;;
		f) file="$OPTARG" ;;
		k) keyword="$OPTARG" ;;
		-) case "$OPTARG" in
			help) show_help; exit 0 ;;
			*) log_write "Error: Invalid option '--$OPTARG'" ;;
			esac ;;
		?) log_write "Error Invalid Operation '-$OPTARG'" ;;
	esac
done
if [[ -z "$dir" && -z "$file" ]]; then
	log_write "Error: Either Directory or a file must be specified"
	exit 1
fi
if [[ -n "$file" && ! -f "$file" ]]; then
	log_write "Error: File '$file' does not exist."
	exit 1
fi
if [[ -z "$keyword" || ! "$keyword" =~ ^[a-zA-Z0-9_]+$ ]]; then
	log_write "Error: Invalid or empty keyword."
	exit 1
fi
if [[ -n "$dir" ]]; then
	recur_dir "$dir" "$keyword"
elif [[ -n "$file" ]]; then
	if grep -q "$keyword" "$file" 2>/dev/null; then
        	echo "Match found in the file."
	else
		log_write "No Match found."
	fi

fi
