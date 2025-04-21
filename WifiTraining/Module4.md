---
# Assignment for Module 4
---
## Q1) What is the significance of MAC layer and in which position it is placed in the OSI model

 - The **MAC (Medium Access Control) layer** is a sublayer of the **Data Link Layer (Layer 2)** in the OSI model.
 - The MAC layer is part of the 2 sublayers in the Data Link layer which also includes the Logical Link Layer.The MAC layer handles the lower-level operations.
 - It controls how devices on a network gain access to the shared communication medium, such as wireless channels or Ethernet.
 - Provides hardware addressing (MAC addresses) and allows unique identification of devices within the same network.
 - Ensures reliable frame delivery between devices on a local area network (LAN).
 - Implements collision avoidance and detection methods such as CSMA/CA in wireless networks and CSMA/CD in wired Ethernet.
 - Manages channel access and regulates device transmissions to avoid data interference.
 - Plays a role in initiating security procedures like authentication and encryption, using protocols such as EAPOL.
 - Handles power-saving mechanisms especially in wireless devices, by managing sleep and wake cycles.
 - Supports Quality of Service (QoS) to prioritize different types of traffic, improving efficiency for time-sensitive data like voice or video.

---
## Q2) Describe the frame format of the 802.11 MAC header and explain the purpose of each fields.

|Field Name	|Size (Bytes)|	Purpose|
|----|----|----|
|Frame Control|	2|	Contains information about the frame type (Management, Control, Data), subtype, and control flags such as To DS, From DS, Retry, More Fragments, etc.|
|Duration/ID|	2	|Used for NAV (Network Allocation Vector) to indicate how long the medium will be reserved. May also carry an association ID in PS-Poll frames.|
|Address 1 (Receiver)|	6|	MAC address of the immediate recipient (e.g., AP or client device).|
|Address 2 (Transmitter)|	6	|MAC address of the device that transmitted the frame.|
|Address 3 (Filtering)|	6	|Typically contains the source or destination address used for filtering at higher layers.|
|Sequence Control|	2|	Contains fragment number and sequence number for reassembly of fragmented frames and to detect duplicates.|
|Address 4 (Optional)|	6 (if present)|	Used only in wireless distribution system (WDS) for frames passing through multiple APs.|
|QoS Control (Optional)	|2 (if present)|	Used in QoS-enabled frames to identify traffic class and priority levels.|
|HT Control (Optional)|	4 (if present)|	Used in high-throughput (802.11n) frames for advanced PHY-layer functions.|
|Frame Body	|Variable|	The actual payload/data being transmitted.|
|FCS (Frame Check Sequence)|	4|	A CRC value used for error checking of the entire frame.|

---
## Q3) Please list all the MAC layer functionalities in all Management, Control and Data plane

### Management Plane Functionalities
 - **Beacon Frame Transmission** – APs periodically broadcast beacons containing network information.
 - **Authentication** – Initial identity verification between the client and AP.
 - **Association/Reassociation** – Clients establish (or re-establish) a connection with an AP.
 - **Deauthentication/Disassociation **– Terminates a client’s connection or access.
 - **Probe Request/Response** – Used during active scanning to discover available networks.
 - **Capability Advertisement** – Devices advertise supported features (e.g., supported data rates).
 - **Load Balancing & Roaming Support** – Helps manage client distribution and mobility between APs.
 - **Timing Synchronization** – Ensures time synchronization across devices using beacon frames.
 - **Security Key Management (EAPOL)** – Manages 4-way handshake and encryption key distribution.

### Control Plane Functionalities

 - **RTS/CTS (Request to Send / Clear to Send)** – Used to avoid collisions, especially in hidden node scenarios.
 - **ACK (Acknowledgement)** – Confirms successful frame delivery.
 - **PS-Poll (Power Save Poll)**– Allows a client to retrieve buffered data while in power-save mode.
 - **Block ACK Control**– Supports acknowledgment of a block of frames for efficiency.
 - **Control Frames for TX Opportunity (TXOP)** – Manages time-based access to the channel.
 - **NAV Management**– Updates the Network Allocation Vector based on control frame info.

### Data Plane Functionalities

 - **Frame Aggregation (A-MSDU, A-MPDU)** – Increases efficiency by combining multiple frames.
 - **Fragmentation and Reassembly** – Supports breaking down and reconstructing large data frames.
 - **Reliable Data Delivery**– Ensures data is transmitted reliably with retries and acknowledgments.
 - **QoS Support (WMM)**– Prioritizes traffic based on class (voice, video, best effort, background).
 - **Data Forwarding**– APs relay data between clients or toward the distribution system.
 - **Encryption and Decryption** – Handles frame-level security using protocols like WPA2/WPA3.

---
## Q4) Explain the scanning process and its types in detail

### Scanning process:
Scanning is the process by which a wireless client (STA) searches for available wireless networks (SSIDs) in its vicinity before associating with an Access Point (AP). This is essential for network discovery, roaming, and connectivity.
#### Initiation
 - The client (STA – Station) decides to look for available wireless networks. This could be during initial startup, a manual scan, or due to roaming needs (weak signal).
#### Channel Selection
 - The client starts scanning across the available wireless channels (usually one channel at a time).
#### Scanning Type
 - Passive Scanning:
    - The client listens on each channel for beacon frames periodically sent by APs.
    - No frames are transmitted by the client.
  - Active Scanning:
    - The client sends a Probe Request frame on each channel.
    - APs that receive this request respond with Probe Response frames.
#### Information Gathering
From either beacon or probe response frames, the client gathers.
 - SSID (network name)
 - BSSID (AP MAC address)
 - Supported data rates
 - Security settings (e.g., WPA2, WPA3)
 - Channel/frequency
 - Signal strength (RSSI)
#### Evaluation
The client evaluates the networks based on criteria like:
 - Signal strength
 - Preferred SSID
 - Security compatibility
 - Network load
#### Selection
The client selects the most suitable AP/network based on evaluation.
#### Authentication & Association
Once selected, the client begins the process of:
 - Authentication (open or secured)
 - Association with the AP

### Types of Scanning:
|Type | How It Works | Frames Used | Power Consumption | Speed | Use Cases|
|---|---|---|----|---|--|
|Passive Scanning | The client listens for beacon frames periodically broadcast by APs on each channel. | Beacon Frames (from APs) | Lower | Slower | Battery-sensitive devices, regulated environments|
|Active Scanning | The client actively sends Probe Request frames on each channel and waits for Probe Responses. | Probe Request / Probe Response | Higher | Faster | Faster roaming, client-initiated discovery|

---
## Q5) Brief about the client association process
1. Scanning
 - The client scans for available networks using active or passive scanning to discover nearby Access Points (APs).
2. Authentication
 - The client sends an authentication request to the selected AP.
 - In open authentication, it's a simple request/response.
 - In shared key or enterprise authentication, further steps like EAP may be involved.
3. Authentication Response
 - The AP replies with an authentication response, accepting or rejecting the client’s request.
4. Association Request
 - If authenticated, the client sends an association request frame to the AP. This includes:
   - SSID
   - Supported data rates
   - Capabilities (e.g., QoS, security)
5. Association Response
 - The AP sends an association response, approving or denying the connection. If approved, it assigns an Association ID (AID).
6. 802.1X/EAP (if secured network)
 - If the network is using WPA2/WPA3-Enterprise, EAP authentication is triggered at this point, using the 802.1X framework.
7. 4-Way Handshake
 - In secured networks (WPA2/WPA3), the 4-way handshake occurs to establish encryption keys using EAPOL messages.
8. IP Address Assignment
 - The client requests an IP address, typically via DHCP.
9. Connected State
 - Once associated and authenticated, the client can exchange data with the network.

## Q6) Explain each steps involved in EAPOL 4-way handshake and the purpose of each keys derived from the process

### Steps involved int he EAPOL handshake:
|Step | Initiator | Message | Purpose|
|----|----|----|----|
|1 | AP | Sends ANonce (AP’s random number) to the client | Starts the handshake; used to derive PTK.|
|2 | Client | Sends SNonce (Client's random number) + MIC | Client calculates PTK using ANonce, SNonce, MACs, and PMK. Sends MIC to prove possession of PMK.|
|3 | AP | Sends GTK, encrypted with PTK + MIC | AP confirms PTK match, sends Group Key (GTK) securely.|
|4 | Client | Sends acknowledgment (ACK) + MIC | Confirms key installation and readiness to begin encrypted communication.|

### Keys and their purpose:
|Key Name | Purpose|
|---|----|
|PMK (Pairwise Master Key) | Derived from pre-shared key (PSK) or 802.1X/EAP process. Acts as the root key.|
|PTK (Pairwise Transient Key) | Derived during handshake using PMK + nonces + MACs. Used for unicast traffic encryption.|
|GTK (Group Temporal Key) | Used to encrypt broadcast/multicast traffic. Shared among all clients on the same SSID.|

---
## Q7) Describe the power saving scheme in MAC layer and explore on the types of Power saving mechanisms

### Power Saving Scheme in MAC Layer:
 - **Purpose**: To reduce power consumption in wireless devices, especially in battery-operated devices like smartphones, laptops, and IoT devices.
 - **Mechanism**: Devices in the wireless network can enter power-saving modes to reduce their activity when no data is being transmitted or received.
 - **Power Saving in 802.11 Standards**:
     - **802.11 Power Save (PS):** A method in the MAC layer to reduce power by allowing devices to go into sleep mode during idle periods.
     - **AP Polling:** The Access Point (AP) buffers the data for a device and sends it to the device only when it wakes up.
 - **Beacon Frames**: In 802.11, APs send out beacon frames that notify devices when they should wake up to check for data.
 - **Wake-up Time and Listen Interval**: Defines the frequency with which devices wake up to check for any buffered data at the AP.
 - **PS-Poll**: A mechanism where the device sends a poll frame to the AP to request any data waiting for it.
 - **Advantages**:
     - Extends battery life by reducing power usage during idle times.
     - Lowers energy consumption in wireless networks, which is crucial for mobile devices.
 - **Disadvantages**:
     - Increased latency due to wake-up times.
     - Complexity in synchronization between devices and AP.
    
### Types of Power Svaing Mechanisms:

|Type | Description | Use Case|
|----|----|-----|
|Legacy Power Save Mode | Basic sleep mode; client sleeps and periodically checks TIM in beacon frames. | General use; compatible with all APs.|
|U-APSD (Unscheduled Automatic Power Save Delivery) | Allows clients to schedule power saving based on application needs. Uses trigger frames for data delivery. | VoIP, video calling, low-latency apps.|
|TWT (Target Wake Time) – 802.11ax | Client and AP negotiate specific wake-up times to send/receive data. Extremely efficient. | IoT devices, modern Wi-Fi 6 devices.|
|WNM-Sleep Mode (802.11v) | Allows client to enter sleep mode and temporarily pause data delivery. | Enterprise Wi-Fi networks, mobile clients.|
|Power Save Multi-Poll (PSMP) | AP schedules and aggregates data delivery to multiple clients efficiently. | High-density environments (e.g., classrooms).|

---
## Q8) Describe the Medium Access Control methodologies
### CSMA/CA (Carrier Sense Multiple Access with Collision Avoidance)
 - **Definition**: A MAC method used in wireless networks to manage how devices share the same communication channel.
 - **How It Works:**
     - **Carrier Sense**: Devices listen to the channel to check if it's idle before transmitting.
     - **Collision Avoidance:** If the channel is idle, the device waits for a random backoff time before transmitting to avoid simultaneous transmissions that could cause collisions.
     - **RTS/CTS (Request to Send / Clear to Send)**: Optional mechanism used to avoid hidden node problems, where devices signal to each other before transmitting.
 - **Advantages:**
     - Reduces the chance of collisions in the shared wireless medium.
     - Widely used in Wi-Fi networks.
 - **Disadvantages:**
     - Performance can degrade in congested networks due to collisions or excessive retransmissions.
     - The hidden node problem may still occur.
### TDMA (Time Division Multiple Access)
 - **Definition:** A MAC technique that divides the channel into fixed time slots and assigns each device a specific time to transmit.
 - **How It Works**:
     - Devices take turns transmitting in their assigned time slots.
     - No device can transmit outside its allocated time slot, ensuring there is no collision.
 - **Advantages:**
     - Efficient for networks with predictable traffic patterns.
     - Provides deterministic access to the medium, ensuring fairness.
 - **Disadvantages:**
     - May be inefficient for bursty traffic as time slots may remain unused if no data is ready to send.
     - Requires precise synchronization among devices.
### FDMA (Frequency Division Multiple Access)
 - **Definition:** A MAC technique that divides the available frequency spectrum into multiple channels, each assigned to a device or user.
 - **How It Works:**
     - Each device transmits on a unique frequency band or channel.
     - Devices can transmit simultaneously without interference, as they operate on different frequencies.
 - **Advantages:**
     - Suitable for environments where simultaneous transmissions are required.
     - No time synchronization required among devices.
 - **Disadvantages:**
     - Less efficient than other techniques if frequency spectrum is scarce.
     - Interference can occur if the frequency bands are not properly managed.
### CDMA (Code Division Multiple Access)
 - **Definition:** A MAC method that allows multiple devices to share the same frequency band simultaneously by using different codes.
 - **How It Works:**
     - Devices are assigned unique codes, and their signals are spread across the frequency spectrum.
     - Signals are decoded at the receiver end by correlating with the assigned code.
 - **Advantages:**
     - High capacity since many devices can share the same frequency band without interference.
     - Resilient to interference and fading, making it suitable for cellular networks.
 - **Disadvantages:**
     - Requires complex signal processing and synchronization.
     - Can suffer from near-far problems, where devices that are far from the receiver may experience poor signal quality.
### Polling
 - **Definition:** A MAC scheme where a central controller (usually an access point or base station) polls devices for permission to transmit.
 - **How It Works:**
     - The central controller asks each device whether it has data to transmit.
     - Devices only transmit when they are polled, reducing the likelihood of collisions.
 - **Advantages:**
     - Efficient in environments where most devices have low traffic.
     - Eliminates collisions as devices only transmit when polled.
 - **Disadvantages:**
     - Centralized control can be a bottleneck in large networks.
     - Increases delay, as devices may have to wait for their turn to be polled.
### Scheduling
 - **Definition:** A MAC methodology where the access point or controller schedules the transmission times for each device.
 - **How It Works:**
     - The access point allocates transmission opportunities to devices based on factors like priority, data rate, and fairness.
     - Scheduling can be done in real-time (for dynamic needs) or in advance (for fixed patterns).
 - **Advantages:**
     - Can provide Quality of Service (QoS) by prioritizing certain traffic.
     - Optimizes channel usage based on the needs of the devices.
 - **Disadvantages:**
     - Requires complex algorithms to manage and maintain fairness.
     - Increased overhead in managing the schedule.

## Q9) Brief about the Block ACK mechanism and its advantages
### Block ACK Mechanism:
The Block ACK (Acknowledgment) mechanism is a feature in the IEEE 802.11 standard (Wi-Fi) that allows the sender to transmit a series of frames and receive a single acknowledgment (ACK) for all the frames in a block. This mechanism significantly reduces overhead and improves throughput in wireless communication.
### Workings

 - Instead of sending an ACK for each individual frame, the Block ACK allows the receiver to send one acknowledgment for a group (block) of frames.
 - Block Size: The sender can send a block of frames, and the receiver will acknowledge all frames in the block at once. The maximum number of frames in a block is typically defined (e.g., 64 frames) depending on the 802.11 standard.
 - Control Frame: To manage Block ACK, control frames like Block ACK Request and Block ACK are used:
    - The Block ACK Request is sent by the sender to request acknowledgment for the block of frames.
    - The Block ACK frame is sent by the receiver to confirm successful receipt of the block.
 - Partial Acknowledgment:The receiver can also indicate whether any frames in the block were lost or errored. If some frames are lost, a Selective Block ACK can be sent, indicating which frames need to be retransmitted.
 - Windowing:A sliding window is used, allowing the sender to keep transmitting frames in a block until the window size is full. This window mechanism allows continuous data flow with minimal interruption.

### Advantages of the Block ACK Mechanism:

|Advantage | Description|
|--|--|
|Reduced Overhead | Traditional ACKs require the sender to wait for an ACK for every frame. Block ACK consolidates multiple acknowledgments into a single frame, reducing channel time used for ACKs.|
|Increased Throughput | Fewer ACK frames mean more time for data transmission, improving overall throughput—especially beneficial with many small packets.|
|Improved Efficiency | Effective in high-rate transmissions with quick frame succession, boosting network performance in heavy traffic scenarios.|
|Error Handling | Supports partial acknowledgments and selective retransmissions, reducing redundant data and improving efficiency.|
|Better Use of Bandwidth | Less airtime used for ACKs allows more bandwidth for actual data, enhancing network capacity.|
|Latency Reduction | Reduces waiting time for multiple ACKs, lowering latency and supporting high-speed data needs.|
|Scalability | Supports efficient operation in networks with many devices by minimizing ACK overhead and improving scalability.|

## Q10) Explain about A-MSDU, A-MPDU and A-MSDU in A-MPDU
### A-MSDU (Aggregated MAC Service Data Unit)
 - **Definition**: A-MSDU is a technique used to aggregate multiple smaller data frames (MAC Service Data Units) into a single larger MAC frame.
 - **Purpose**: The aim is to reduce overhead, improve throughput, and reduce the number of frames transmitted over the network.
 - **How It Works**:
     - The data payload from several frames are combined into a single frame, which is transmitted in one larger unit.
     - Each subframe (the individual data units) has its own MAC header and can be addressed to different destinations.
 - **Advantages**:
     - Reduces the overhead of transmitting multiple small frames.
     - Improves spectral efficiency and reduces the overhead of sending many small frames.
 - **Limitations**:
     - The maximum size of the A-MSDU is limited by the maximum frame size (usually around 8,000 bytes).
     - Error recovery is harder because if one subframe is corrupted, the entire A-MSDU may need to be retransmitted.
### A-MPDU (Aggregated MAC Protocol Data Unit)
 - **Definition**: A-MPDU aggregates multiple individual MAC Protocol Data Units (MPDUs) into a single transmission.
 - **Purpose**: To increase efficiency by reducing the overhead from frame headers and increasing throughput.
 - **How It Works**:
     - A-MPDU is used for transmission on the PHY layer (Physical Layer).
     - Multiple MPDUs (which are usually the basic data units in 802.11 frames) are packed together within a single frame.
     - Unlike A-MSDU, the subframes in an A-MPDU are transmitted in sequence, each with its own header.
 - **Advantages**:
     - Each individual MPDU within the A-MPDU can be individually acknowledged.
     - It is better for error handling than A-MSDU because if a single MPDU fails, it can be retransmitted independently of the others.
     - Improves throughput by reducing overhead and increasing efficiency.
 - **Limitations**:
     - The total size of the A-MPDU can be limited, typically to 64KB, which restricts the number of MPDUs that can be included in one transmission.
### A-MSDU in A-MPDU
 - **Definition:** This is the combination of A-MSDU aggregation within an A-MPDU aggregation.
 - **How It Works**:
     - You can combine both A-MSDU and A-MPDU techniques to improve the performance further.
     - In this case, an A-MPDU is used as the primary container for the transmission, and within each MPDU, one or more A-MSDUs can be aggregated.
     - So, each MPDU in an A-MPDU contains a group of smaller data frames (A-MSDUs), further reducing overhead while maintaining error-handling capabilities.
 - **Advantages**:
     - Combines the benefits of both techniques: A-MSDU reduces overhead at the MAC layer, and A-MPDU allows multiple MPDUs to be aggregated.
     - Increases efficiency and throughput significantly by reducing frame headers, while also allowing independent error recovery.
 - **Limitations**:
     - Complexity increases due to the interaction between the two aggregation techniques.
     - Error recovery mechanisms become more intricate since both A-MSDU and A-MPDU are involved.

---
END of ASSIGNMENT for Module 4
---
---
