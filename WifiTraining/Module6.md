---
# Assignment for Module 6
---
## Q1. What are the pillars of Wi-Fi security?
There are 3 main pillars in the Wifi Security namely Authenticity, Integrity and confidentiality.
### 1. Authenticity
 - Definition: Ensures that devices and users are who they claim to be.  
 - In Wi-Fi:  
    - Achieved through authentication protocols like WPA2-PSK or WPA2/WPA3-Enterprise (802.1X with RADIUS).  
    - Prevents unauthorized access to the wireless network.   
 - Key Mechanisms:  
    - Pre-shared keys (PSK) 
    - 802.1X authentication  
    - EAP (Extensible Authentication Protocol) methods   
## 2. Integrity  
 - Definition: Ensures that data is not altered or tampered with during transmission.   
 - In Wi-Fi:   
    - Ensures that received data is the same as what was sent.  
    - Protects against man-in-the-middle (MITM) and data injection attacks.  
 - Key Mechanisms:     
    - Message Integrity Codes (MICs) in the 4-way handshake  
    - CCMP (Counter Mode with Cipher Block Chaining Message Authentication Code Protocol) in WPA2/WPA3   
    - Prevents packet spoofing or modification  
## 3. Confidentiality   
 - Definition: Ensures that transmitted data remains private and secure.  
 - In Wi-Fi:  
    - Data is encrypted to prevent eavesdropping by unauthorized parties.   
 - Key Mechanisms:  
    - Encryption standards: WEP (weak), TKIP (transitional), AES (strong)   
    - Secure key exchange and encryption protocols ensure that only authenticated devices can read the data.  

---
## Q2. Explain the difference between authentication and encryption in WiFi security.
|Aspect	|Authentication	|Encryption|
|----|----|----|
|Purpose|	Verifies the identity of a user or device|	Protects data from being read by unauthorized users|
|When It Occurs|	Before establishing a secure connection	|After authentication, during data transmission|
|Function|	Ensures only authorized users can access the network	|Ensures transmitted data remains confidential|
|Key Technologies|	WPA2-PSK, WPA3-SAE, 802.1X (RADIUS), EAP methods|	WEP, TKIP, AES, CCMP|
|Prevents	|Unauthorized access to the Wi-Fi network	|Eavesdropping and data theft|
|Validation Method|	Passwords, certificates, user credentials	|Cryptographic keys used to encode/decode data|
|Visibility to User|	User usually enters a password or logs in	|Happens in the background; transparent to user|
|Example Scenario	|Device checks password or logs in to RADIUS server	|Data packets between client and AP are encrypted over the air|

---
## Q3. Explain the differences between WEP, WPA, WPA2, and WPA3.

|Feature	|WEP|	WPA	|WPA2|	WPA3|
|----|---|---|---|----|
|Full Form|	Wired Equivalent Privacy|	Wi-Fi Protected Access|	Wi-Fi Protected Access 2|	Wi-Fi Protected Access 3|
|Introduced In|	1997	|2003	|2004	|2018|
|Encryption Algorithm	|RC4 (weak)	|TKIP (better than RC4, still weak)	|AES-CCMP (strong)	|AES-CCMP / GCMP-256|
|Key Management|	Static keys	|Dynamic keys with TKIP	|Dynamic keys with AES	|SAE (Simultaneous Authentication of Equals)|
|Security Level|	Very Weak	|Moderate	|Strong	|Very Strong|
|Vulnerabilities|	Easily crackable|	TKIP is vulnerable to attacks	|Secure if configured properly|	Resistant to offline dictionary attacks|
|Authentication|	Pre-shared key (PSK) |only	PSK or 802.1X|	PSK or 802.1X|	SAE for personal, 802.1X for enterpris|e
|Forward Secrecy|	No|	No|	No	|Yes|
|Use Today|	Deprecated (not recommended)|	Deprecated|	Widely used|	Recommended for modern devices|
|Best Use Case|	Legacy devices (not secure)	|Temporary legacy support|	Current standard in many networks	|Secure networks (IoT, enterprise, personal)|

---
## Q4. Why is WEP considered insecure compared to WPA2 or WPA3?
### 1. Weak Encryption  
WEP uses the RC4 encryption algorithm, which has known vulnerabilities. The key length is also relatively short (40 or 104 bits), making it easier to crack.  
### 2. Poor Key Management  
WEP relies on static keys that are often shared among users. This lack of dynamic key exchange makes it easier for attackers to intercept and decipher communication.  
### 3. Easily Crackable with Tools  
With modern tools like Aircrack-ng, attackers can break WEP encryption within minutes by collecting enough data packets, thanks to weaknesses in the initialization vector (IV) used to generate keys.  
### 4. No Integrity Checks  
WEP lacks proper integrity checks for packets, making it vulnerable to attacks like packet injection or modification, which WPA2 and WPA3 mitigate with stronger message integrity checks.  
### 5. Lack of Forward Secrecy  
WEP does not provide forward secrecy, meaning that if an attacker gains access to a WEP key, they can decrypt all past traffic. WPA2 and WPA3, however, use more advanced methods like the Four-Way Handshake to prevent this issue.  
### 6. WPA2 and WPA3 Improvements  
WPA2 uses AES encryption, which is significantly more secure than WEP’s RC4. WPA3 improves on this further with better protection against brute-force attacks and stronger encryption mechanisms.  

---
## Q5. Why was WPA2 introduced?
WPA2 was introduced to address the following :
### 1. Security Vulnerabilities in WEP  
WEP (Wired Equivalent Privacy) was the original standard for wireless network security but was found to have significant flaws. These included weak encryption (RC4), poor key management, and vulnerability to packet sniffing and attacks like brute-force decryption. WPA2 was introduced to address these weaknesses.

### 2. Stronger Encryption with AES  
WPA2 replaced WEP’s RC4 encryption with AES (Advanced Encryption Standard), which is much more secure and resistant to attacks. AES provides a higher level of confidentiality and integrity for data transmission.
  
### 3. Improved Key Management  
WPA2 introduced the 802.1X protocol for stronger, dynamic key management, which ensures that encryption keys are generated and distributed securely. This replaced WEP’s static key management, making it more difficult for attackers to intercept and misuse keys.
  
### 4. Protection Against Replay and Integrity Attacks  
WPA2 uses the 4-Way Handshake mechanism to ensure that keys are exchanged securely between the client and the access point. It also incorporates integrity checks, preventing attacks such as packet injection and replay.
  
### 5. Compliance with Modern Standards  
WPA2 is compliant with the IEEE 802.11i standard, which defines secure wireless communication. This standard was created to improve the overall security of Wi-Fi networks and ensure they meet the increasing need for data protection in wireless communications.
  
### 6. Industry Requirement
As wireless networks became more widespread and security concerns grew, WPA2 became the standard to meet industry needs for secure Wi-Fi networks, offering a more reliable solution for both personal and enterprise-level deployments.

---
## Q6. What is the role of the Pairwise Master Key (PMK) in the 4-way handshake?
### Role of the PMK:
 - The PMK is a shared secret between the client (STA) and the access point (AP), established during the authentication process. 
 - It is used to derive session-specific keys, including:
    - Pairwise Transient Key (PTK) – used to encrypt unicast traffic.
    - Message Integrity Code (MIC) key – ensures data integrity.
### In the 4-Way Handshake Process:
 - After authentication (via PSK or 802.1X), both the client and AP share the PMK.
 - The PMK, along with nonces and MAC addresses, is used to derive the PTK.
 - The handshake verifies that both the client and AP know the PMK, preventing spoofing.
 - It guarantees that the session is encrypted, authenticated, and protected from tampering.

---
## Q7. How does the 4-way handshake ensure mutual authentication between the client and the access point?
### How the 4-Way Handshake Ensures Mutual Authentication
**1. Initial Validation with PMK**  
Both the client (STA) and the access point (AP) already share the Pairwise Master Key (PMK) after the authentication process (via PSK or 802.1X). This shared secret is fundamental for the authentication process.

**2. Message 1 – AP Sends a Nonce**  
The AP generates and sends a nonce (a random number) to the client in the first message. This ensures the freshness of the session and is essential for deriving the Pairwise Transient Key (PTK). At this point, the client knows the AP is legitimate because the AP has initiated the handshake.

**3. Message 2 – Client Responds with Nonce and MIC**  
The client uses the PMK, the AP’s nonce, its own nonce, and MAC addresses to generate the PTK. It then sends the second message back to the AP, which includes the client’s nonce and a Message Integrity Code (MIC). The MIC verifies the integrity of the message and proves the client knows the PMK, confirming the client’s legitimacy.

**4. Message 3 – AP Verifies MIC and Sends Confirmation**  
The AP verifies the MIC from the client’s response. If the MIC is valid, it confirms the client knows the PMK. The AP also sends its own MIC in this message to authenticate itself to the client.

**5. Message 4 – Client Verifies AP’s MIC**  
Finally, the client checks the MIC in the AP's response. If the MIC is valid, the client confirms the AP knows the PMK, completing mutual authentication.

---
## Q8. What will happen if we put a wrong passphrase during a 4Way handshake?
### PMK Mismatch
 - The wrong passphrase generates a different PMK, which doesn’t match the one on the AP.
 - This causes a failure in key agreement between the client and AP.
### Incorrect PTK Derivation
 - The mismatched PMK leads to different PTKs on the client and AP, preventing encryption.
 - The session cannot be secured, and communication is blocked.
### Failure to Complete the 4-Way Handshake
 - The handshake fails as both parties can’t authenticate each other or establish keys.
 - This prevents the establishment of a secure connection.
### No Secure Connection
 - Without a successful handshake, the client cannot connect to the AP.
 - Data transmission is blocked due to the failure to establish encryption.
### Error Messages or Timeout
 - The client may receive an error or experience a timeout, indicating authentication failure.
 - The connection attempt will either be aborted or retried.
### Security Measures
 - The wrong passphrase prevents unauthorized access by failing to establish a secure session.
 - The system ensures that only the correct passphrase can initiate a secure connection.

---
## Q9. What problem does 802.1X solve in a network?
### Secure Authentication for Wireless Networks   
 - 802.1X provides a framework for secure authentication of devices connecting to a network, ensuring only authorized users or devices can access the network.  
 - It prevents unauthorized access by requiring credentials before granting network access.  
### Prevents Unauthorized Access to Wired Networks  
 - 802.1X is used for both wireless and wired networks, enforcing authentication on devices trying to connect to a switch port or wireless access point.  
 - This mitigates the risk of unauthorized devices accessing sensitive resources.   
### Dynamic Key Management  
 - It supports dynamic key exchange, where encryption keys are generated and distributed securely between the client and the network access device (e.g., a switch or AP).  
 - This enhances security by preventing static key reuse and ensuring that session keys are unique for each connection.  
### Centralized Authentication with RADIUS  
 - 802.1X works with a RADIUS (Remote Authentication Dial-In User Service) server, centralizing authentication, authorization, and accounting processes.  
 - This provides better control, scalability, and management of network access policies.  
### Improved Network Security  
 - It ensures that only devices with valid credentials (username/password, certificates, etc.) can access the network, reducing the risk of rogue devices connecting.  
 - It also supports additional security methods, such as mutual authentication and certificate-based authentication, providing stronger protection.  

---
## Q10. How does 802.1X enhance security over wireless networks?
802.1X enhances wireless security by providing strong, per-user authentication and dynamic encryption key management before allowing network access.
### Key Ways 802.1X Enhances Wireless Security:
 1. Individual User Authentication   
    - Each user is authenticated separately using credentials such as username/password or certificates.  
 2. Dynamic Key Generation    
    - Upon successful authentication, unique encryption keys (e.g., PMK) are generated for each session, unlike the shared keys used in WPA2-PSK.
 3. Access Control Before IP Assignment
    - Devices cannot send or receive network traffic until they are authenticated, reducing the risk of unauthorized access or man-in-the-middle attacks.
 4. Integration with RADIUS  
    - 802.1X integrates with RADIUS servers for centralized management, user authentication, and logging, making it ideal for enterprise environments.
 5. Support for EAP Methods    
    - 802.1X supports various secure authentication methods using Extensible Authentication Protocol (EAP) types such as EAP-TLS, PEAP, and more.

---
END of ASSIGNMENT for Module 6
---
---
