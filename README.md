# 🌾 Agri-Wheel: Smart & Sustainable Agriculture System

## 📘 Abstract
**Agri-Wheel** is an **IoT + Machine Learning-based Smart Agriculture System** that aims to help farmers achieve **better yield in less area** with **data-driven precision farming**.  
The project integrates **sensors, Azure Cloud, ML algorithms, and an Android App** to monitor soil, predict suitable crops, control irrigation, and detect plant diseases and weeds — all in one system.

---

## 🧠 Motivation
Agriculture forms the backbone of India’s economy, yet challenges like **soil degradation, overuse of fertilizers**, and **climate change** reduce productivity.  
Agri-Wheel addresses these by using **real-time data**, **AI**, and **IoT automation** to assist farmers with smart decision-making.

---

## ⚙️ System Overview
Our model operates through **three layers**: **Hardware**, **Cloud**, and **Application**.

### 🧩 System Architecture
Below is the overall architecture of Agri-Wheel showing how sensors, the cloud, and the Android app interact.

![Block Diagram](Images_Agri/Block_Diagram.png)

---

## 🌿 Hardware Components

The hardware part consists of a **microcontroller**, multiple **sensors**, and a **solar-powered battery system** for off-grid operation.

### 🔧 Components Used:
- **Microcontroller:** ESP32 / NodeMCU / Arduino  
- **Sensors:**  
  - NPK Sensor  
  - pH Sensor  
  - EC Sensor  
  - Soil Moisture Sensor  
  - Temperature & Humidity Sensor  
  - Water Level Sensor  
- **Camera Module:** For crop image capturing every 3 hours  
- **Power:** Solar panels charging battery supply  

![Sensors](Images_Agri/Sensors.png)

---

## ☁️ Cloud Integration (Azure)
The data collected from sensors is uploaded to **Microsoft Azure Cloud**, which performs:
- Data storage and management  
- ML-based processing and prediction  
- Communication between devices and Android App  

This architecture ensures real-time updates and smart decision automation.

![Overall Innovation](Images_Agri/Overall%20Innovation.png)

---

## 🤖 Machine Learning & AI Models

### 🌾 Crop Recommendation (XGBoost)
To suggest the most suitable crop, the **XGBoost** algorithm analyzes:
- NPK (Nitrogen, Phosphorus, Potassium)
- pH and EC levels
- Temperature, Humidity, and Soil Moisture  
It predicts which crop yields the highest return under those soil conditions.

![Crop Recommendation](Images_Agri/Crop_Recommendation.png)
![Dataset](Images_Agri/Dataset.png)
![Features](Images_Agri/Features.png)

---

### 💧 Smart Irrigation System
The irrigation module uses **sensor thresholds** and **condition-based algorithms**:
- **INLET motor:** Turns **ON** when soil moisture < threshold  
- **OUTLET motor:** Removes excess water during overwatering/heavy rain  
All actions are controlled automatically or via the mobile app.

---

### 🌿 Disease Detection (CNN)
Farmers can capture and upload a photo of a diseased leaf using the **Android App**.  
The **CNN (Convolutional Neural Network)** model analyzes the image and:
- Predicts the disease  
- Recommends fertilizers/pesticides  
- Displays product information in the app  

![Prediction](Images_Agri/Prediction.png)

---

### 🌱 Weed Detection (YOLOv5)
Weeds are detected using the **YOLOv5 Object Detection Model**.  
The onboard camera captures real-time field images and identifies weed locations.  
These detections are sent to the app so farmers can take quick action.

---

## 📱 Android Application
The **Android App** provides farmers with:
- Live soil & weather data  
- Crop and fertilizer recommendations  
- Disease detection results  
- Voice guidance in local language  
- Motor control for irrigation  

![model](Images_Agri/model.png)

---

## 🧭 Workflow Summary

| Stage | Description |
|:--|:--|
| **1. Data Collection** | Sensors collect soil and environmental readings, while the camera captures images. |
| **2. Cloud Processing** | Azure ML models process the data to provide crop and irrigation recommendations. |
| **3. Decision Making** | System triggers irrigation motors and sends updates to the Android App. |
| **4. Farmer Interaction** | Farmer receives recommendations and can control system through app or voice commands. |

---

## 🔋 Power System
The device runs on **battery power**, recharged via **solar panels**.  
This makes the system **eco-friendly** and usable even in remote rural areas.

---

## 💡 Key Benefits
✅ Real-time soil monitoring  
✅ Automatic irrigation control  
✅ Crop and fertilizer suggestions  
✅ Disease & weed detection  
✅ Voice-assisted app for farmers  
✅ Renewable energy-powered system  

---

## 🧠 Algorithms Used

| Module | Algorithm | Function |
|:--|:--|:--|
| Crop Recommendation | XGBoost | Suggests best crops based on soil & environment |
| Disease Prediction | CNN | Classifies crop disease from image |
| Weed Detection | YOLOv5 | Detects unwanted weeds |
| Irrigation Control | Condition-Based Logic | Automates water supply |

---

## 🌎 Technologies Used

| Category | Tools / Technologies |
|:--|:--|
| **Hardware** | Arduino / ESP32, Sensors, Camera |
| **Machine Learning** | XGBoost, CNN, YOLOv5 |
| **Cloud** | Microsoft Azure IoT Hub, Azure ML |
| **App** | Android Studio (Java/Kotlin) |
| **Communication** | MQTT / HTTP |
| **Power** | Solar + Battery Backup |

---

## 🔮 Future Enhancements
- Integration with **Weather APIs** for predictive irrigation  
- **AI Voice Assistant** in multiple languages  
- **Drone-based weed spraying** system  
- Larger **crop dataset** for better accuracy  

---

## 👨‍💻 Contributors
- **Nageswara Rao Potla**  
- Team Agri-Alliance  

---

## ⚖️ License
Released under the **MIT License** — free for academic and research use with attribution.

---

## 🧰 Clone & Run

```bash
# Clone repository
git clone https://github.com/nageswararaopotla/Agri-Alliance.git

# Navigate
cd Agri-Alliance
