---
Assignment for Module 3
---
## Q1) What are the different 802.11 PHY layer standards? Compare their characteristics.

|Standard|	Frequency Band	|Max Data Rate|	Modulation Techniques|	Channel Width|	Year Introduced|	Notes|
|-----|----|----|----|----|----|----|
|802.11a|	5 GHz|	54 Mbps|	OFDM	|20 MHz|	1999|	First to use 5 GHz, less interference but shorter range|
|802.11b|	2.4 GHz|	11 Mbps	|DSSS|	22 MHz|	1999	|Longer range, more interference, widely adopted early on|
|802.11g|	2.4 GHz	|54 Mbps|	OFDM (with DSSS backward support)|	20 MHz|	2003	|Backward compatible with 802.11b|
|802.11n	|2.4/5 GHz|	600 Mbps|	OFDM + MIMO|	20/40 MHz|	2009|	Introduced MIMO and channel bonding|
|802.11ac|	5 GHz|	6.9 Gbps|	OFDM + MU-MIMO|	20/40/80/160 MHz	|2013|	High throughput, wider channels, beamforming|
|802.11ax	|2.4/5/6 GHz|	9.6 Gbps|	OFDMA + MU-MIMO + BPSK to 1024-QAM|	20 to 160 MHz	|2019 (Wi-Fi 6/6E)|	More efficient in dense environments, supports 6 GHz (Wi-Fi 6E)|

---
## Q2) What are DSSS and FHSS? How do they work?

|Aspect	|DSSS (Direct Sequence Spread Spectrum)	|FHSS (Frequency Hopping Spread Spectrum)|
|-----|-----|------|
|Spreading Technique|	Spreads the signal over a wide frequency band using a pseudo-random code|	Rapidly changes (hops) the carrier frequency across a band|
|Operation|	Data is multiplied by a higher-rate chipping code (e.g., Barker code)|	Transmits short bursts of data on different frequencies in sequence|
|Bandwidth Usage|	Uses a wide, continuous bandwidth	|Uses narrow bandwidth at any given moment but hops across the band|
|Interference Handling|	Resistant to narrowband interference|	Avoids interference by hopping away from affected frequencies|
|Security	|Provides basic security through code spreading|	Offers better security through frequency changes|
|Complexity|	More complex receiver and synchronization	|Simpler implementation, but requires timing coordination|
|Data Rate|	Higher data rates due to continuous transmission|	Generally lower data rates|
|Examples	|Used in 802.11b	|Early versions of Bluetooth, 802.11 FHSS legacy mode|
|Synchronization	|Requires code synchronization	|Requires frequency hopping synchronization|
|Suitability|	Suitable for stable environments|	Better for environments with interference or multipath fading|

---
## Q3) How do modulation schemes work in the PHY layer? Compare different modulation schemes and their performance across various Wi-Fi standards.

### How do modulation schemes work in the PHY layer?:
 - Modulation schemes play a critical role in encoding data onto carrier singals for transmission over the air.
 - Modulation translates digital binary data into analog waveforms that can travel through the wireless medium. The more comple the modulation, more bits can be plced per symbol, increasing the daya rates.
 - Wifi standards use amplitude, phase or both to modulate the signals.
 - Some schemes include:
   - **BPSK (Binary Phase Shift Keying)**: modulates the phase of rhe carrier.
   - **QPSK (Quadrature Phase Shift Keying)**: uses four phase shifts.
   - **QAM (Quadrature Amplitude Modulation)**: combines amplitude and phase modulation to send multiple bits per symbol.
### The key comparions b/w these different schemes are:  

|Modulation Scheme|	Bits per Symbol|	Required SNR (approx.)	|Used In Wi-Fi Standards|	Performance Characteristics|
|---|---|---|---|--|
|BPSK|	1 bit|	~6 dB	|802.11a/b/g/n/ac/ax|	Very robust, low speed, good for long distances|
|QPSK|	2 bits|	~9 dB|	802.11a/g/n/ac/ax	|Balanced between speed and reliability|
|16-QAM|	4 bits|	~16 dB|	802.11n/ac/ax|	Moderate speed, more prone to noise|
|64-QAM|	6 bits|	~23 dB	|802.11n/ac/ax|	Higher throughput, suitable for clean environments|
|256-QAM|	8 bits|	~30 dB|	802.11ac/ax	|Very high speed, requires very strong signals|
|1024-QAM|10 bits	|~35 dB	|802.11ax (Wi-Fi 6/6E)|	Ultra-high throughput, ideal for short-range high-speed|

---
## Q4) What is the significance of OFDM in WLAN? How does it improve performance?

### Significance of OFDM in WLAN:
 - **High Data Rates:** By sending data in parallel on many subcarriers, OFDM allows very high throughput.
 - **Efficient Spectrum Usage:**	Closely packed orthogonal subcarriers maximize the use of available bandwidth.
 - **Resistance to Interference:**	Each subcarrier carries a low data rate signal, making it more resilient to frequency-selective fading and noise.
 - **Multipath Tolerance:**	Handles reflection and signal delays (multipath) effectively, which is common in indoor environments.
 - **Improved Range and Stability:**	Because of its robustness to interference and fading, users experience fewer dropped connections.
 - **Flexible Bandwidth Allocation:**	OFDM allows scalable channel widths (20 MHz, 40 MHz, 80 MHz, etc.), making it adaptable to various devices and environments.
 - **Foundation for Advanced Tech:**	Enables technologies like MIMO, beamforming, and OFDMA (in Wi-Fi 6).

---
## Q5) How are frequency bands divided for Wi-Fi? Explain different bands and their channels.

### 2.4 GHz Band
  
 - **Frequency Range**: 2.400 – 2.4835 GHz
 - **Channels:** 14 total, but only 3 are non-overlapping (1, 6, 11)
 - **Pros:** Long range, good wall penetration
 - **Cons:** Highly congested (shared with Bluetooth, microwaves, etc.)
 - **Used In:** Wi-Fi 1 (802.11b), Wi-Fi 3 (802.11g), Wi-Fi 4 (802.11n), Wi-Fi 6

### 5 GHz Band
  
 - **Frequency Range:** 5.150 – 5.825 GHz (varies by region)
 - **Channels:** Over 20 non-overlapping, supports 20/40/80/160 MHz widths
 - **Pros:** Higher speeds, less interference
 - **Cons:** Shorter range, some channels require DFS (Dynamic Frequency Selection)
 - **Used In:** Wi-Fi 5 (802.11ac), Wi-Fi 6

### 6 GHz Band

 - **Frequency Range:** 5.925 – 7.125 GHz
 - **Channels:** Up to 59 new channels (in 20 MHz increments)
 - **Pros:** Clean spectrum, ideal for high-speed/low-latency needs
 - **Cons:** Short range, only supported by Wi-Fi 6E and newer devices
 - **Used In:** Wi-Fi 6E (extension of Wi-Fi 6), future Wi-Fi 7

### 60 GHz Band

 - **Frequency Range:** 57 – 71 GHz
 - **Channels:** High-frequency, short-range only
 - **Pros:** Ultra-fast speeds (multi-gigabit), low latency
 - **Cons:** Very short range, blocked by walls and obstacles
 - **Used In:** WiGig (802.11ad, 802.11ay), niche applications like VR and wireless docking

---
## Q6) What is the role of Guard Intervals in WLAN transmission? How does a short Guard Interval improve efficiency?

### Guard Interval (GI)?
In WLAN communication, a Guard Interval is a small time gap inserted between transmitted symbols. Its main role is to prevent inter-symbol interference (ISI) caused by signal reflections (multipath effects).
 - Standard GI: 800 nanoseconds
 - Short GI (SGI): 400 nanoseconds

In real-world environments, signals bounce off walls and objects, causing delayed echoes.If the next symbol starts too soon, those echoes can interfere with it. The Guard Interval provides a buffer time to allow these reflections to settle before the next symbol starts.

### How Does a Short Guard Interval Improve Efficiency?
- Reduces symbol duration by 400 ns
- Increases throughput (~11%)
- Suitable for clean, short-range environments
- By using a shorter GI, more symbols can be transmitted in the same amount of time, boosting data rates—but only when the signal environment is clean and controlled.

---
## Q7) Describe the structure of an 802.11 PHY layer frame. What are its key components?

### PHY Layer Frame:
 - The PHY layer frame (or PPDU – PLCP Protocol Data Unit) is what the physical layer sends over the air. It includes headers, training fields, and the actual data payload.
### Structure:
**1. Preamble**    
  - Purpose: Allows the receiver to detect, synchronize, and prepare for decoding.  
  - Contents:  
    - Short Training Field (STF)  
    - Long Training Field (LTF)  
    - Signal Field (SIG)    
  - Importance: Helps with frequency and timing synchronization.  
  
**2. Header (PLCP Header)**  
  - Carries information about the frame length, modulation, coding rate, etc.
  - Ensures the receiver knows how to interpret the data.
      
**3. Data Field (PSDU – Physical Layer Service Data Unit)**  
   - Contains the MAC frame payload.
   - Encoded using modulation and coding schemes (e.g., QAM, BPSK).
         
**4. Tail and Padding**  
   - Tail bits help the receiver complete decoding.
   - Padding ensures the frame fits modulation block sizes.  

---
## Q8) What is the difference between OFDM and OFDMA?

|Aspect	|OFDM (Orthogonal Frequency Division Multiplexing)|	OFDMA (Orthogonal Frequency Division Multiple Access)|
|---|---|---|
|Access Type|	Single-user access	|Multi-user access|
|Subcarrier Allocation|	All subcarriers are used by one user at a time	|Subcarriers are divided among multiple users simultaneously|
|Efficiency	|Less efficient in high-density environments	|Highly efficient in dense environments (e.g., Wi-Fi 6)|
|Latency	|Higher latency due to sequential access|	Lower latency as multiple users are served in parallel|
|Scheduling|	Simpler scheduling|	Requires more complex scheduling logic|
|Use Case|	Used in 802.11a/g/n/ac Wi-Fi standards|	Introduced in 802.11ax (Wi-Fi 6)|
|Uplink Support|	Less efficient in uplink	|Efficient simultaneous uplink from multiple users|

---
## Q9) What is the difference between MIMO and MU-MIMO?

|Aspect	|MIMO (Multiple Input Multiple Output)|	MU-MIMO (Multi-User MIMO)|
|----|-----|----|
|User Support|	Supports one user at a time	|Supports multiple users simultaneously|
|Data Streams|	All spatial streams sent to a single device	|Spatial streams divided among multiple devices|
|Efficiency|	Better than legacy systems but underutilized in crowded areas|	Highly efficient in environments with many devices|
|Downlink/Uplink|	Mostly used in downlink	|Available in both downlink and uplink in newer standards|
|First Introduced In|	802.11n (Wi-Fi 4)	|802.11ac (downlink), 802.11ax (downlink + uplink)|
|Use Case|	Ideal for single-device high throughput|	Ideal for multi-device environments like classrooms or offices|
|Signal Coordination|	Simpler beamforming|	Requires advanced beamforming and channel feedback|

---
## Q10) What are PPDU, PLCP, and PMD in the PHY layer?
### PPDU (Physical Protocol Data Unit):
 - The PPDU is the complete set of data that is transmitted over the air at the physical layer.
 - It includes all the components—preamble, header, payload (data), tail, and any padding—required for a receiver to properly decode the transmitted information.

### PLCP (Physical Layer Convergence Protocol):
 - The PLCP sub-layer is responsible for preparing and formatting the PPDU.
 -  It adds a preamble and header that provide key information such as timing, modulation and coding schemes, and packet length.
 -  Essentially, the PLCP enables the receiver to synchronize with the incoming signal and understand how to process the subsequent data.

### PMD (Physical Medium Dependent):
 - The PMD sub-layer concerns the actual modulation, coding, and transmission of the PPDU over the air.
 - It handles the conversion of bits into radio signals (and vice versa) while accounting for the specific characteristics of the physical transmission medium.

---
## Q11) What are the types of PPDU? Explain the PPDU frame format across different Wi-Fi generations.

|Wi-Fi Generation|	PPDU Type|	Preamble & Header Components|	Key Features / Notes|
|-----|---|-----|----|
|Legacy (802.11a/b/g)	|Legacy PPDU	|- Preamble: Short Training Field (STF) and Long Training Field (LTF) - Signal (SIG) Field: Contains modulation, rate, and length information	|Designed for basic wireless operation; focuses on synchronization and channel estimation; used in early standards with lower data rates and single-stream operation.|
|High Throughput (802.11n)|	HT PPDU	|- Enhanced Preamble: Additional training fields to support MIMO - Modified PLCP Header: Includes HT signaling for channel bonding (20/40 MHz)	|Introduces MIMO support and channel bonding; improved throughput with additional training fields to optimize multi-antenna configurations.|
|Very High Throughput (802.11ac)|	VHT PPDU	|- Mixed Preamble: Begins with legacy compatibility fields (e.g., L-STF, L-LTF) followed by VHT-specific training - SIG-A and SIG-B Fields: Contain VHT-specific info	|Supports wider channels (up to 160 MHz) and higher-order modulation; maintains backward compatibility through legacy fields and adds VHT fields for enhanced performance.|
|High Efficiency (802.11ax)|	HE PPDU|	- Optimized Preamble: Contains HE-SIG-A and HE-SIG-B fields tailored for OFDMA and MU-MIMO - Flexible Header Structure: Adapts to variable channel widths|	Designed for high-efficiency operation in dense environments; supports advanced features such as OFDMA, refined scheduling, and improved spectral efficiency over prior standards.|

## Q12) How is the data rate calculated?

The formula to calculate the data rate is:  
### Data Rate in Bits/Microsecond = DS * M * C * SS / (DIT + GI) 

where, 
 - DS- Data Rate in Mbit/sData Subcarriers 
 - M- Modulation 
 - C- Coding rate
 - SS- No of Spatial Streams 
 - DIT- Data Interval Time 
 - GI- Guard Interval

---
END of ASSIGNMENT for Module 3
---
---


