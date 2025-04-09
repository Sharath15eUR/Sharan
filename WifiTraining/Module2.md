---
Assignment for Module  2
---

## Q1) Brief about SplitMAC architecture and how it improves the AP's performance.
  
### SplitMAC Architecture:
  
 - It divides the MAC layer responsibilities between the AP and the Wireless LAN Controller.
 - It also has local handling of time critical tasks like frame acknowledgement , retranmissions, beacon generation and MAC layer timing are handled by the AP.
 - It provides a centralised management for high level tasks like authentication, roaming decision etc.
 - The communication between AP and WLC in a splitMAC setup is typically carried out using CAPWAP protocol.
 - It enables deplyment of large scale wireless networks with centralised control, making it easier to manage multiple APs.
 - Aps can be plug and play, as they can download configs and firmware from the WLC.
 - It enhances roaming by centralised control allowing for faster and more seamless clent roaming across APs.
 - It uniformly enforces security policies like WPA2/WPA3 across all the AP.
  
### How it improves the AP's performance:
 - It reduces overhead on AP making it lightweight.
 - As said before the centralised control allows for a better scalability and policy enforcement.
 - Enhances realtime responsiveness since the AP handles latency sensitive tasks.
 
---
## Q2) Describe about CAPWAP, explain the flow between AP and Controller.
 
### CAPWAP:
 - CAPWAP is a protocol that enables communication b/w APs and WLCs.
 - Stands for Control and Provisioning of Wireless Access Points.
 - Designed to centrally manage APs.
 
### Flow:
 -  AP boots and discovers WLC (via DHCP, DNS, broadcast).
 -  DLTS handshake occurs to establish a secure channel.
 -  AP downloads the configuration and firmware if required from the WLC.
 -  CAPWAP tunnels are established-> one for traffic and one for data.
 
 ---
## Q3) Where this CAPWAP fits in OSI model, what are the two tunnels in CAPWAP and its purpose.

 - AN AP and a WLC use IP addresses to communicate with their environment , so they work at OSI Layer 3.
 - It uses UDP ports 5246 (control channel) and 5247 (data channel).
 - It has two tunnels:
 	- **Control Tunnel**: Uses DTLS for secure exchange of configurations and management messages.
 	- **Data Tunnel**: Carries end-user data between AP and WLC (encapsulated.).

---
## Q4) What’s the difference between Lightweight APs and Cloud-based APs.

|Feature	| Lightweight APs	| Cloud-based APs| 
|------------|---------------------|------------------|
|Controller Location|	On-premises WLC (Wireless LAN Controller)|	Cloud-hosted (internet-based) controller|
|Management Interface	|Managed through WLC GUI/CLI locally	|Managed through a web-based/cloud dashboard|
|Configuration Deployment	|Configuration pushed from local controller|	Configuration pushed from the cloud|
|Initial Setup	|Requires controller discovery (DHCP Option 43, DNS)	|Connects directly to cloud after internet access|
|Control & Data Tunneling|	Uses CAPWAP tunnels (control and data)	|Typically no tunneling; local switching with cloud control|
|Scalability	|Limited to controller capacity	|Highly scalable (virtually unlimited)|
|Cost Structure	|Upfront hardware cost + WLC license|	Subscription-based model (monthly/yearly fees)|
|Software/Firmware Updates|	Pushed from local WLC|	Automatically managed by cloud provider|
|Resilience to Internet Issues|	Continues locally if WLC is reachable	|May lose management temporarily, but AP continues working|
|Best Use Case	|Enterprises with strict control or security needs|	Branch offices, SMBs, or distributed deployments|
|Roaming & Policy Control	|Centrally managed via WLC|	Cloud-enforced, with some local intelligence|

---
## Q5) How the CAPWAP tunnel is maintained between AP and controller.
To maintain the state of a CAPWAP tunnel, both ends of the tunnel periodically exchange different pacekets to detect tunnel connectivity.If no response is received after several attempts , the AP marks the WLC as unreachable.
DTLS ensures the control tunnel is secure.
Data tunnel remains open for traffic unless interrupted or rekeyed.

 - **Keepalive packets** for a CAPWAP data tunnel on the udp port 5247
 - **Echo packets** for a CAPWAP control tunnel on the UDP port 5246

---
## Q6) What’s the difference between Sniffer and Monitor mode, use case for each mode.

|Feature/Aspect|	Sniffer Mode	|Monitor Mode|
|------|------|-----|
|Primary Function|	Captures and forwards 802.11 packets to an analyzer tool|	Monitors wireless traffic and detects threats or issues|
|Purpose|	Deep packet inspection and protocol analysis|	Wireless security, RF analysis, and rogue AP detection|
|Data Handling|	Sends raw packet captures to tools like Wireshark|	Does not forward packets; observes and reports|
|AP Role|	Acts as a remote packet sniffer	|Acts as a spectrum/traffic monitor|
|Tools Used With|	Wireshark, OmniPeek, etc.|	WLC security dashboard, WIPS systems|
|Channel Scanning|	Typically fixed to one channel during capture|	Can scan multiple channels (based on config)|
|Impact on Network	|Passive; does not interfere with network|	Passive; does not transmit data|
|Deployment Scenario|	During network debugging or packet-level investigations	|Continuous monitoring in enterprise or security-sensitive areas|
|Use Case|	Troubleshooting client issues, analyzing traffic patterns|	Wireless intrusion detection, spectrum management|

---
## Q7) If WLC deployed in WAN, which AP mode is best for local network and how?
If the Wireless LAN Controller (WLC) is deployed over the WAN, the best mode for local Access Points is **FlexConnect** formerly known as H-REAP. This mode allows APs to maintain connectivity and provide local switching and authentication even if the connection to the controller is interrupted.

### The key features of FlexConnect Mode are:

 - APs can locally authenticate clients using cached credentials or local RADIUS servers.
 - Client data traffic is switched directly to the local LAN, not tunneled to the WLC.
 - Enables continued operation during WAN outages.
 - Centralized policies are still enforced when WLC is reachable.

This setup is ideal for remote branches, educational campuses, or any site where WLC is not locally present. It ensures resiliency and reduces WAN bandwidth usage, improving overall network performance and reliability.

---
## Q8) What are challenges if deploying autonomous APs (more than 50) in large network like university.

Autonomous APs operate independently, meaning each AP must be manually configured and managed. Deploying over 50 such APs in a large environment like university,it introduces several challenges such as:

 - **Scalability**: Each AP needs individual configuration, firmware updates, and policy enforcement.It can be labor-intensive and error-prone.

 - **Roaming Issues**: Client devices may experience connection drops or delays when moving between APs since there's no centralized control for handoffs.

 - **Inconsistent Coverage**: Without coordinated channel planning, there may be overlapping coverage, interference, or coverage holes.

 - **Security Risks**: Uniform enforcement of security policies becomes difficult; rogue AP detection and user monitoring are limited.

 - **Maintenance Complexity**: Troubleshooting and performance monitoring are decentralized, making diagnosis time-consuming.

This is why large scale networks typically use centralized or cloud managed APs.

---
## Q9) What happens on wireless client connected to Lightweight AP in local mode if WLC goes down.

### When a WLC goes down if its connected to Lightweight AP in local mode:
 - **Exisiting Clients**: The APs can maintain sessions with clients that are already authenticated and associated before the WLC went down.
 - **Data forwarding**: It may continue to be forwarded locally for existing sessions until a session timeout.
 - **SSIDs**: THe ap still sends beacon frames with configured SSIDs.
 - **New client**: Since local mode APs rely on the WLC for authentication, new clients cannot conenct or get IPs.
 - **Roaming b/w APs fails**: The roaming process depends on the controller for handoff and session conitnuity.
 - **Policy enforcement halts**: Centralised policies like VLAN assignments , ACLs, QoS wont be enforced.
 - Any changes in WLAN setting cannot be pushed to AP.

---
END of ASSIGNMENT for Module 2
---
---


