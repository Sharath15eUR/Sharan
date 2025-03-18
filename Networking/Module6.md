---
Assignment for Module 6
---

## Q1) Capture and analyze ARP packets using Wireshark. Inspect the ARP request and reply frames when your device attempts to find the router’s MAC address. Discuss the importance of ARP in packet forwarding.

### Steps to ping the router and capture the ARP Packets:
 - Open Wireshark and start a capture on the Network medium (in this case Ethernet).
 - use the `ping <ip-address>` to ping the router.
 - Frame 1 wil be a Request while Frame 2 a Reply.
 - We can see that in Frame, the sender address is the soruce PC and target MAC is broadcast wtth the router ip address..
 - The reply is with the router MAC address to the source PC.
 - And thus with this, a communincation is established and ping occur.

### Pinging The router:  
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod6/1_1.png)  

---
### WireShark: 
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod6/1_2.png)  

---
### ARP Request: 
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod6/1_3.png) 

---
### ARP Reply:  
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod6/1_4.png)  

---
### Importance of ARP in packet forwarding:
 - Since IP addresses are logical and MAC address are physical , A device cant send frames within a LAN without ARP.
 - IPv4 relies on MAC Resolution, and thus ARP plays a crucial role in ensuring smooth network operations.
 - It is used to send data from one device to another device on the same network. If the MAC address is unkown it sends the ARP request.After retreiving the MAC address, the sender can forward the packets to that MAC address.
 - It is also used to send to a device in another network. The device uses ARP to find the MAC address of the routers interface after which the router takes over and forwards the packets.

---
## Q2) Manually configure static routes on a router to direct packets to different subnets.Use the ip route command and verify connectivity using ping and traceroute.

### We can use the similar setup from last module which is the 4 subnet setup. In the router settings, we can change the routes for each interface by typing `ip add <ip address> <subnet mask>`.
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod6/2_1.png)

---
### Then we can see the ping and tracert to see the packet route for each ping from one pc to PCs from other subnets.
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod6/2_2.png)

---
## Q3) Given a network address of 10.0.0.0/24, divide it into 4 equal subnets. Calculate the new subnet mask. Determine the valid host range for each subnet. Assign IP addresses to devices in Packet Tracer and verify connectivity.

Given Network address 10.0.0.0/24  
Default subnet mask : `255.255.255.0` or in binary `11111111.11111111.11111111.00000000`   
The total no of available IP address : 2<sup>8</sup>= 256    
To divide into 4 subnets, we know that,    
2<sup>N</sup>>=No of subsets   `where N is the no of borrowed bits`    
2<sup>N</sup>>=4    
so N = 2 , so we have to borrow 2 bits.  
New Mask: `11111111.11111111.11111111.11000000` or `255.255.255.192`  /24+2 = /26  
  
|Subnet | Network Address   | First Usable IP    | Last Usable IP     | Broadcast Address  |
|-------|-------------------|--------------------|--------------------|-------------------- | 
|1      | 10.0.0.0/26       | 10.0.0.1/26        | 10.0.0.62/26       | 10.0.0.63/26     |  
|2      | 10.0.0.64/26      | 10.0.0.65/26       | 10.0.0.126/26      | 10.0.0.127/26     | 
|3      | 10.0.0.128/26     | 10.0.0.129/26      | 10.0.0.190/26      | 10.0.0.191/26     | 
|4      | 10.0.0.192/26     | 10.0.0.193/26      | 10.0.0.254/26      | 10.0.0.255/26      |


### Setting up the Topolgy and IPs in the CISCO Packet Tracer: 
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod6/3_1.png)

---
### Testing the connectivity by pinging from one PC to another in every subnet.
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod6/3_2.png)
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod6/3_3.png)

---

## Q4) You are given three IP addresses: 192.168.10.5, 172.20.15.1, and 8.8.8.8. Identify the class of each IP address. Determine if it is private or public. Explain how NAT would handle a private IP when accessing the internet.

|IP Addresses | Class   | Private/Public  |
|-------------|---------|-----------------|
|192.168.10.5 | C       | Private         |  
|172.20.15.1  | B       | Private         | 
|8.8.8.8      | A       | Public          | 

### Process of NAT Translation:
 - A device with a private IP address (eg: `192.168.1.10`)sends a request to an external server (eg: `8.8.8.8`).
 - The router changes the source IP to the routers public IP (eg:200.10.50.1).
 - The NAT Router keeps track of the internal IP and port corresponding to each outbound connection.
 - The packet is then sent to the external destination.
 - The external server receives and responds to the routers public IP address.
 - The router using the NAT table translates the public IP to the original private IP.
 - The response is sent to the device corresponding to the private IP.

## Q5) In Cisco Packet Tracer, configure NAT on a router to allow internal devices (192.168.1.x) to access the internet.  Test connectivity by pinging an external public IP. Capture the traffic in Wireshark and analyze the source IP before and after NAT translation.
(Similar to Q7 in module 5)
### NAT Setup
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod6/7_1.png)  

---
### Router2 OSPF Setup: (Imitating NAT Router)   
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod6/7_3.png)  
  
---
### Router3 OSPF Setup: (Imitating ISP)  
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod6/7_4.png) 
  
---
### Internet Server Access from PC1   
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod6/7_2.png) 
  
---
### NAT Translation Table: (Empty because no Translations has been configured)    
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod6/7_5.png) 
  
---
### Static NAT configuration: (Assigning a public and private)    
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod6/7_6.png) 
  
---
### NAT Translation Table and Statistics:    
![Q1_1](https://github.com/SharanxD/LinuxTraining/blob/main/Networking/Results-Mod6/5_tran.png)  
  
---
END of ASSIGNMENT for Module 6
---
---


