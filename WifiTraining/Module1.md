---
Assignment for Module 1
---

## Q1) In which OSI layer the Wi-Fi standard/protocol fits.

### Wi-Fi Standard in the OSI Model
The Wi-Fi standard (IEEE 802.11) fits into the Data Link Layer (Layer 2) and Physical Layer (Layer 1) of the OSI model.
1. Physical Layer (Layer 1):  
This layer deals with the actual transmission of data over the air using radio waves. It defines:
	 - 	**Modulation Techniques:** OFDM (Orthogonal Frequency Division Multiplexing), DSSS (Direct Sequence Spread Spectrum), etc.
 	- 	**Frequency Bands:** 2.4 GHz, 5 GHz, and 6 GHz.
 	 - **Channel Widths:** 20 MHz, 40 MHz, 80 MHz, 160 MHz.
  	- 	**Data Rates:** Varies based on the Wi-Fi standard (802.11a/b/g/n/ac/ax).
The Physical Layer is responsible for converting digital data into radio signals and vice versa.
2. Data Link Layer (Layer 2):  
 - **Logical Link Control (LLC) Sublayer**
	 - Handles flow control and error checking.
	 - Ensures that data is correctly framed before transmission.
 - **Media Access Control (MAC) Sublayer**   
  	- Defines how devices access the wireless medium.  
	- Uses protocols like Carrier Sense Multiple Access with Collision Avoidance (CSMA/CA) to prevent collisions.  
	- Manages MAC addresses, authentication, and encryption (WPA, WPA2, WPA3).  
The Data Link Layer ensures proper data framing, addressing, and error detection for wireless communication.

|OSI Layer|	Role in Wi-Fi (IEEE 802.11)|
|----|------------|
|Layer 1 (Physical Layer)|	Modulation, radio frequencies, transmission, reception |
|Layer 2 (Data Link Layer - MAC & LLC)|	Media access, authentication, encryption, addressing |
  
Thus we can say that Wi-Fi (IEEE 802.11) primarily operates in the Physical Layer (Layer 1) and Data Link Layer (Layer 2) of the OSI model. The Physical Layer manages radio wave transmission, while the Data Link Layer controls access, authentication, and encryption.

---
## Q2) Can you share the Wi-Fi devices that you are using day to day life, share that device’s wireless capability/properties after connecting to network. Match your device to corresponding Wi-Fi Generations based on properties.

Some common wifi devices  that we use in day to day life include routers, smartphones, laptop, smart TVs. Some properties of these devices are:

|Device	Wi-Fi Standard|	Wi-Fi Generation|	Frequency |  Bands	|Max Speed|
|---------------|-------|-------------|---|--|
|Smartphone (S22)	|802.11ax|	Wi-Fi 6 / 6E|	2.4 GHz, 5 GHz, 6 GHz	|9.6 Gbps|
|Laptop (XPS 15)	|802.11ac|	Wi-Fi 5|	2.4 GHz, 5 GHz	|3.5 Gbps|
|Smart TV	|802.11n|	Wi-Fi 4|	2.4 GHz, 5 GHz	|600 Mbps|
|Wi-Fi Router (AX6000)|	802.11ax|	Wi-Fi 6|	2.4 GHz, 5 GHz	|6 Gbps|
|Smart Home Device|	802.11n|	Wi-Fi 4|	2.4 GHz	|300 Mbps|

Some routers these days provide 6GHz frequency since they are of Wifi 6e generations. 

---
## Q3) What is BSS and ESS?
### Basic Service Set (BSS)
#### Definition:
A Basic Service Set (BSS) is the fundamental building block of a Wi-Fi network. It consists of a single access point (AP) and the associated wireless client devices (stations or group of stations i.e STAs).
#### Types of BSS:
 - Infrastructure BSS:
	 - Involves a Wi-Fi access point (AP) that manages communication between devices.
	 - Devices (clients) must connect to the AP to communicate.
	 - Used in homes, offices, and public Wi-Fi networks.
	 - Identified by a Basic Service Set Identifier (BSSID), which is the MAC address of the AP.
 ![BSS](https://media.geeksforgeeks.org/wp-content/uploads/20201105114401/fffd.png)
 
 - Independent BSS (IBSS) (Ad-hoc Mode):
	 - No access point is involved.
	 - Devices communicate directly with each other in a peer-to-peer manner.
	 - Used in small setups like file sharing between laptops.
#### Example of BSS:
A home Wi-Fi network with a router (AP) and multiple devices (laptop, smartphone, TV) connecting to it.
### Extended Service Set (ESS)
#### Definition:
An Extended Service Set (ESS) consists of multiple BSSs connected together using a wired network (LAN). It allows seamless roaming between access points while staying connected to the same network.
#### Characteristics of ESS:
 - 	Multiple access points (APs) are used to extend coverage.
 - 	Devices can roam between APs while maintaining connectivity.
 - 	All APs in the ESS share the same SSID (Wi-Fi network name) but have different BSSIDs (MAC addresses of APs).
 - 	Common in large buildings, universities, malls, and corporate offices.
#### Example of ESS:
A university Wi-Fi network where students can move from one building to another while staying connected to the same network without disconnecting.

---
## Q4) What are the basic functionalities of Wi-Fi Accesspoint?
A Wi-Fi Access Point (AP) is a networking device that enables wireless devices to connect to a wired network using Wi-Fi. It acts as a central hub for wireless communication and extends network coverage.
### Key Functions of a Wi-Fi Access Point
1. Wireless Connectivity
	- 	Provides wireless access to a network for devices like laptops, smartphones, and IoT devices.
	- 	Uses radio signals to transmit and receive data over the air.
2. Security & Access Control
 	- 	Implements encryption standards like WPA2, WPA3 to protect data transmission.
 	- 	Supports MAC address filtering to restrict unauthorized device access.
 	- 	Uses captive portals for guest authentication in public Wi-Fi networks.
3. Data Transmission Management
 	- 	Uses Carrier Sense Multiple Access with Collision Avoidance (CSMA/CA) to manage network traffic and prevent data collisions.
 	- 	Implements Quality of Service (QoS) to prioritize bandwidth for critical applications (video calls, gaming, etc.).
4. Signal Distribution & Coverage Expansion
 	- 	Extends network coverage in large areas (offices, campuses, hotels).
 	- 	Supports multiple frequency bands (2.4 GHz, 5 GHz, 6 GHz) to optimize performance.
5. Network Bridging
 	- 	Bridges wireless devices to a wired network (LAN).
 	- 	Converts wired Ethernet signals into Wi-Fi signals for wireless access.
6. Roaming Support (ESS Networks)
 	- 	Allows devices to move between multiple access points in an Extended Service Set (ESS) without disconnecting.
 	- 	Uses fast roaming protocols (802.11r, 802.11k, 802.11v) to ensure seamless handover.
7. Bandwidth & Traffic Management
 	- 	Uses band steering to move devices between 2.4 GHz and 5 GHz bands for optimal performance.
 	- 	Supports load balancing to distribute network traffic across multiple APs.
8. Multiple SSID & VLAN Support
 	- 	Creates multiple SSIDs to separate different types of users (e.g., guest Wi-Fi vs. employee network).
 	- 	Works with Virtual LANs (VLANs) to isolate network traffic for security and performance.
9. Mesh Networking (for Seamless Coverage)
 	- 	Some modern APs support Wi-Fi Mesh networks, where multiple APs work together to provide seamless coverage without dead zones.
10. Power over Ethernet (PoE) Support
 	- 	Many enterprise APs use PoE to receive power and data over a single Ethernet cable, reducing the need for additional power sources.

---
## Q5) Difference between Bridge mode and Repeater mode.
### Bridge mode:
Bridge mode allows two or more network segments to communicate with each other by connecting two separate networks (wired or wireless) into a single, unified network.
### Repeater mode:
Repeater mode is used to extend the range of an existing wireless network by receiving, amplifying, and retransmitting the Wi-Fi signal.
### The key differences b/w them are:
|Feature	|Bridge Mode|	Repeater Mode|
|------|----|---|
|Purpose	|Connects two separate networks	|Extends an existing Wi-Fi signal|
|OSI Layer|	Data Link Layer (Layer 2)|	Physical Layer (Layer 1)|
|Network Type|	Works between wired and wireless networks|	Works within the same Wi-Fi network|
|IP Addressing|	Maintains different network segments|	Uses the same subnet and SSID|
|Data Handling|	Forwards packets between networks|	Amplifies and retransmits signals|
|Latency|	Minimal| latency	Can introduce slight delay|
|Use Case|	Connecting remote networks (e.g., two buildings)|	Expanding Wi-Fi coverage in large areas|

---
## Q6) What are the differences between 802.11a and 802.11b?

### 802.11a:
The standard designed in 1999 for high speed connection.
### 802.11b:
The standard designed in 1999 alongside the 802.11a for longer range and better penetration.
### The key differences are:
|Feature	|802.11a|	802.11b|
|----|----|----|
|Year Introduced|	1999|	1999|
|Frequency Band|	5 GHz|	2.4 GHz|
|Maximum Speed|	54 Mbps|	11 Mbps|
|Range (Indoors)|	Shorter (50m)|	Longer (100m)|
|Interference|	Less (due to 5 GHz)|	More (due to 2.4 GHz)|
|Number of Channels|	More (less congestion)|	Fewer (more congestion)|
|Best For|	Businesses, enterprise networks	|Home Wi-Fi, public hotspots|
|Adoption|	Less common	|More widely used initially|

---
## Q7) Configure your modem/hotspot to operate only in 2.4Ghz and connect your laptop/Wi-Fi device, and capture the capability/properties in your Wi-Fi device. Repeat the same in 5Ghz and tabulate all the differences you observed during this.
 
---
## Q8) What is the difference between IEEE and WFA?
### IEEE (Institute of Electrical and Electronics Engineers)	:
IEEE is a professional organization that develops global technical standards for various industries, including Wi-Fi (under the IEEE 802.11 standard).
### WFA (Wi-Fi Alliance):
The Wi-Fi Alliance (WFA) is an industry group that promotes Wi-Fi technology and certifies devices to ensure interoperability and performance.
### Some key differences are:
|Feature	|IEEE (Institute of Electrical and Electronics Engineers)|	WFA (Wi-Fi Alliance)|
|----|-----|----|
|Purpose	|Develops technical Wi-Fi standards (802.11)|	Certifies and promotes Wi-Fi products|
|Focus	|Research, innovation, and standardization	|Interoperability, branding, and certification|
|Standards	|IEEE 802.11 (a, b, g, n, ac, ax)|	Wi-Fi 4, Wi-Fi 5, Wi-Fi 6, Wi-Fi 6E|
|Certification	|No certification process	|Certifies Wi-Fi devices for compatibility|
|Who Uses It?	|Engineers, researchers, developers	|Manufacturers, consumers, and businesses|
|Example	|Defines how Wi-Fi 6 (802.11ax) works technically|	Certifies "Wi-Fi 6 Certified" devices|

---
## Q9) List down the type of Wi-Fi internet connectivity backhaul, share your home/college’s wireless internet connectivity backhaul name and its properties.
|Backhaul Type|	Speed|	Latency|	Best For|	Example|
|----|---|---|---|---|
|Fiber Optic|	1-10 Gbps+|	Very Low|	High-speed broadband, ISPs|	FTTH (Fiber to the Home)|
|Ethernet|	1-10 Gbps|	Very Low|	Mesh networks, offices, gaming|	LAN cable backhaul|
|Coaxial Cable|	Up to 1 Gbps	|Moderate|	Cable broadband|	DOCSIS 3.1|
|Microwave|	1-10 Gbps|	Low	|Telecom towers, rural areas|	Mobile carrier networks|
|mmWave	|10 Gbps+|	Very Low|	5G urban coverage|	5G small cells|
|Wi-Fi Mesh|	300 Mbps – 2 Gbps|	Moderate|	Home Wi-Fi systems|	Google Nest, Eero|
|Satellite|	100 Mbps – 1 Gbps|	High	|Remote areas|	Starlink, Viasat|
|4G/5G Cellular|	100 Mbps – 10 Gbps|	Low|	Mobile broadband, rural ISPs|	5G FWA|

Fiber Optic is the internet connectivity backhaul for the house along with the properties as below:

---
Q10) List down the Wi-Fi topologies and use cases of each one.

|Wi-Fi Topology|	Definition|	Best For|
|----|---|---|
|BSS (Basic Service Set)|	Single AP connects clients|	Home Wi-Fi, small offices|
|Ad-Hoc Mode|	Devices connect directly without AP|	Gaming, file sharing, emergencies|		
|ESS (Extended Service Set)|	Multiple APs for seamless coverage|	Large buildings, schools, malls|
|Mesh Wi-Fi|	Interconnected APs with self-healing|	Large homes, smart cities|
|Wi-Fi Repeater|	Extends Wi-Fi signal without cables	|Home & small office Wi-Fi extension|
|PtP / PtMP|	Wireless links between buildings|	Rural ISPs, campus networking|
|Wi-Fi Hotspot|	Public internet access points|	Airports, cafés, hotels|
|Bridge Mode|	Connects two networks without routing|	Extending LAN/WAN networks|




---
END of ASSIGNMENT for Module 1 
---
---


