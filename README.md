# Agri-Alliance
Smart and Sustainable Agriculture
# 🌾 Agri-Wheel

### Smart and Sustainable Agriculture System

![Soil Sensor](https://github.com/nageswararaopotla/Agri-Alliance/blob/main/Sensor%20Data%20collection_images/soil_sensor.png)

---

## 📘 Abstract

Agriculture forms the backbone of India’s economy, yet with an increasing population and shrinking arable land, farmers must produce more in less area. The **Agri-Wheel** project proposes a **smart, IoT-driven, and AI-powered agriculture system** that integrates **Wireless Sensor Networks (WSNs)** and **Machine Learning (ML)** to monitor, predict, and control agricultural parameters for sustainable crop production.  

Farmers often overuse chemical fertilizers without proper soil analysis, harming soil fertility and human health. To solve these issues, **Agri-Wheel** combines IoT-based soil testing, machine learning–based crop recommendation, and automated irrigation management to achieve **precision farming** and **efficient resource utilization**.  

---

## 💡 Overall Innovation

Agri-Wheel provides an **integrated solution** consisting of three main components:

1. **Hardware System**  
   - Collects soil and environmental data using sensors (NPK, pH, EC, temperature, humidity, water level, and moisture).  
   - Captures crop images periodically via camera modules for disease and weed analysis.  
   - Powered by **solar energy** to promote renewable power usage.

2. **Cloud Platform (Azure)**  
   - Data collected from sensors and camera modules is sent to the Azure cloud.  
   - The cloud performs data analytics and ML-based decision-making.  

3. **Android Application**  
   - Displays real-time data, fertilizer recommendations, and irrigation control.  
   - Provides **voice assistance** in the local language for easy farmer interaction.  

---

## ⚙️ System Architecture

The workflow is divided into **three major stages**:

### 1️⃣ Data Collection
- Sensors measure **NPK**, **pH**, **EC**, **moisture**, **temperature**, **humidity**, and **water level**.  
- Camera modules capture field and crop images periodically.  
- Sensor data is transmitted to the **microcontroller** and then to the **Azure cloud**.

### 2️⃣ Data Processing & Decision Making
- Collected data is compared with **threshold reference values** stored in the cloud.  
- ML algorithms analyze and process data to:
  - Recommend suitable crops using **XGBoost**
  - Predict plant diseases using **CNN (Convolutional Neural Network)**
  - Detect weeds using **YOLOv5**
  - Control irrigation automatically

### 3️⃣ Output Control & Display
- Cloud sends commands to the hardware for:
  - Automatic motor control (INLET and OUTLET)  
  - Water management during rain or drought  
- Mobile application displays:
  - Real-time soil and crop data  
  - Fertilizer recommendations  
  - Disease and weed detection reports  

---

## 🤖 Machine Learning Models Used

| Function | Algorithm | Purpose |
|-----------|------------|----------|
| Crop Recommendation | XGBoost | Suggests best crops based on NPK, pH, EC, moisture, and weather |
| Disease Detection | CNN | Classifies crop diseases using leaf images |
| Weed Detection | YOLOv5 | Detects weeds in the field using image recognition |

---

## 🔋 Power & Sustainability

- The entire system operates on **battery power** charged through **solar panels**, making it environmentally sustainable.  
- Reduces water wastage and fertilizer overuse.  
- Promotes smart, data-driven agriculture for rural farmers.

---

## 📱 Android Application Features

- Displays real-time soil parameters (NPK, pH, EC, moisture, etc.)  
- Shows crop and fertilizer recommendations  
- Predicts plant diseases and suggests remedies  
- Provides voice-based commands and assistance  
- Supports image upload for disease analysis  

---

## 🧠 Features Summary

- 🌱 **Soil Analysis** — Real-time soil testing using multiple sensors  
- 🌾 **Crop Recommendation** — ML-based prediction using XGBoost  
- 💧 **Smart Irrigation** — Automatic water control system  
- 📸 **Disease Detection** — CNN model for identifying plant diseases  
- 🌿 **Weed Detection** — YOLOv5-based detection system  
- ☀️ **Renewable Energy** — Solar-powered IoT system  
- 🔊 **Voice Interaction** — Local-language support for farmers  
- ☁️ **Azure Cloud Integration** — Data storage and model execution  

---

## 🧩 Hardware Components

| Component | Function |
|------------|-----------|
| Arduino / NodeMCU / ESP32 | Microcontroller for IoT control |
| NPK Sensor | Measures Nitrogen, Phosphorus, and Potash |
| pH Sensor | Analyzes soil acidity |
| EC Sensor | Tests electrical conductivity of soil |
| Moisture Sensor | Detects soil moisture level |
| Temperature & Humidity Sensor | Monitors environment |
| Water Level Sensor | Prevents over-irrigation |
| Camera Module | Captures plant images |
| Solar Panel & Battery | Power source |

---

## ☁️ Cloud & Software

- **Azure Cloud Platform** for data handling and ML model deployment  
- **Arduino IDE** for embedded programming  
- **Python** for ML algorithms  
- **Android Studio** for mobile app development  

---

## 📊 Data Flow Diagram


