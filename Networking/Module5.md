---
Assignment for Module 5
---

## Q1) Capture and analyze ARP packets using Wireshark. Inspect the ARP request and reply frames, and discuss the role of the sender’s IP and MAC address in these packets

### ARP:
 - or Address Resolution Protocol is usually used to map an IP to a MAC address within a local network.
 - Devices send ARP Requests as a broadcast to find the MAC address associated with the IP address.
 - The target devices responds with a ARP Reply , allowing communication to proceed with the MAC Address.
  
### Steps to capture ARP Packets:
 - Create a normal topology with 2 PCs and a switch and assign IPs to each PC.
 - use the `ping <ip-address>` to ping a device from another.
 - Capture the packets by right clicking and choosing capture packets.
 - It should open the Wireshark, then filter the packets by searching arp.
 - The results should be like Fig-1
 - Frame 1 wil be a Request while Frame 2 a Reply.
 - We can see that in Frame 1, the sender address is the soruce PC and target MAC is broadcast.
 - The reply is with the target MAC address to the source IP.
 - And thus with this, a communincation is established and ping occur.
   
Fig-1:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/1_1.png)  
Frame 1: (Request)  
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/1_2.png)  
Frame 2: (Reply)  
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/1_3.png)  
  
  
## Q2) Using Packet Tracer, simulate an ARP spoofing attack. Analyze the behavior of devices on the network when they receive a malicious ARP response

### ARP Spoofing:
 - Create a general toplogy as the image , as we can see a threat PC has access to the switch.
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/2_!.png)  
 - PC1 is able to access the Server:  (along witht the ARP table)  
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/2_2.png)  
 - Initial Threat PC configs and MAC address: 
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/2_3.png)  
 - The Threat PC can get the MAC address of the router which is as the pitcure below shows:  
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/2_4.png)    
 - Before Spoofing:  
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/2_5.png)  
 - After Spoofing:  
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/2_6.png)  
 - When we see the ARP Table in the PC1, we can notice that the threat PC also has the same MAC address.
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/2_7.png)  
 - Now, when we try to access the Server , we can see that it is not reachable. This is because due to the spoofing, the threat PC sends a false ARP reply to the PC1 and establishes a wrong connection.
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/2_8.png)  
  
The main challenge of this is that, with proper tools the attacker can read the data that the PC1 tries to send to the server which they can later modify , or forward traffic enabling a Man in the Middle Attack and data theft.
  
  
## Q3) Manually configure static IPs on the client devices (like PC or your mobile phone) and verify connectivity using ping.

### Initially on Phone, its set to DHCP by default and we can see the IP in the WIFI settings.    
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/3_3.jpg)  
### Trying to ping it from PC:    
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/3_1.png)  
### We can manually change the IP by changing from DHCp to static and settings up an IP address:    
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/3_4.jpg)  
### Trying to ping the new IP address:      
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/3_2.png)  
  
        
## Q4) Use Wireshark to capture DHCP Discover, Offer, Request, and Acknowledge messages and explain the process.

### DHCP:
 - Open wireshark and the Local Network (Ethernet 3 in this case) and start the capture.
 - To capture the DHCP Packets, we can release the ipconfig of the PC using `ipconfig /release`
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/4_1.png)
 - To assign , we can use `ipconfig /renew`
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/4_2.png)
 - Go back to WireShark and filter by typing DHCP on the top.
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/4_3.png)

As we can see , we get the DHCP Discover, OFfer Request and ACknowledge Packets. The process includes:
 - DHCP Discover (Broadcast): if a client device has no IP address yet , it sends a DHCP discover message as a broadcast to find a DHCP server.
 - DHCP Offer: This is the server receiving the request and responding with a DHCP offer message. It wil include an available IP address, subnet mask, default gateway router, DNS servers and lease time.
 - DHCP Request: The client chooses the offered IP and sends a DHCP request to the server.
 - DHCP acknowledge: The DHCP confirms the assignment by sending a DHCP acknowledgement message. The assigned IP is temporary and has a lease time. Befire it expires the client sends a DHCP request again to renew the lease.If the lease expires without renewal, the IP is returned to the pool for other devices.

      
## Q5) Given an IP address range of 192.168.1.0/24, divide the network into 4 subnets.  
##  Task: Manually calculate the new subnet mask and the range of valid IP addresses for each subnet. Assign IP addresses from these subnets to devices in Cisco Packet Tracer and verify connectivity using ping between them.    
  
Given IP range : `192.168.1.0/24` and to be divided into `4 subnets`.  
Default subnet mask : `255.255.255.0` or in binary `11111111.11111111.11111111.00000000`  
The total no of available IP address : 2<sup>8</sup>= 256  
To divide into 4 subnets, we know that,  
2<sup>N</sup>>=No of subsets   `where N is the no of borrowed bits`  
2<sup>N</sup>>=4  
so N = 2 , so we have to borrow 2 bits.
New Mask: `11111111.11111111.11111111.11000000` or `255.255.255.192`  /24+2 = /26

| Subnet | Network Address   | First Usable IP    | Last Usable IP     | Broadcast Address  |
|--------|-------------------|--------------------|--------------------|--------------------|
| 1      | 198.168.1.0/26    | 198.168.1.1/26     | 198.168.1.62/26    | 198.168.1.63/26    |
| 2      | 198.168.1.64/26   | 198.168.1.65/26    | 198.168.1.126/26   | 198.168.1.127/26   |
| 3      | 198.168.1.128/26  | 198.168.1.129/26   | 198.168.1.190/26   | 198.168.1.191/26   |
| 4      | 198.168.1.192/26  | 198.168.1.193/26   | 198.168.1.254/26   | 198.168.1.255/26   |
  
###To Test:  
 - We can create the subnet topology in the Cisco Packet Tracer such as below.
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/5_1.png)  
 - And we can try to ping a PC from every Subnet from Subnet 1:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/5_2.png)  
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/5_3.png)  
As we can see it works.

         
## Q6) You are given three IP addresses: 10.1.1.1, 172.16.5.10, and 192.168.1.5.  
##   Task: Identify the class of each IP address (Class A, B, or C). What is the default subnet mask for each class? Provide the range of IP addresses for each class.  

Given Ips: 10.1.1.1 , 172.16.5.10, 192.168.1.5

We know that range of each class as:
| Class | Range                        | Default Subnet Mask | 
|-------|------------------------------|---------------------|
| A     | 1.0.0.0 - 126.255.255.255    | 255.0.0.0/8         | 
| B     | 128.0.0.0 - 191.255.255.255  | 255.255.0.0/16      | 
| C     | 192.0.0.0 - 223.255.255.255  | 255.255.255.0/24    | 


Thus the given IP classification are:
 - 10.1.1.1 -> `Class A`
 - 172.16.5.10 -> `Class B`
 - 192.168.1.5 -> `Class C`
  
  
## Q7) In Cisco Packet Tracer, create a small network with multiple devices (e.g., 2 PCs and a router). Use private IP addresses (e.g., 192.168.1.x) on the PCs and configure the router to perform NAT to allow the PCs to access the internet.  
##   Task: Test the NAT configuration by pinging an external IP address from the PCs and capture the traffic using Wireshark. What is the source IP address before and after NAT?  

### NAT Setup:
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/7_1.png)    
Router2 OSPF Setup: (Imitating NAT Router)    
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/7_3.png)   
Router3 OSPF Setup: (Imitating ISP)   
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/7_4.png)   
Internet Server Access from PC1   
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/7_2.png)  
NAT Translation Table: (Empty because no Translations has been configured)  
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/7_5.png)  
Static NAT configuration: (Assigning a public and private)  
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/7_6.png)  
NAT Translation Table:  
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod5/7_7.png)  

    
--- 
END of ASSIGNMENT for Module 5
---
---


