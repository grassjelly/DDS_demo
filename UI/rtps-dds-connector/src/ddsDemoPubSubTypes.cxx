// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*! 
 * @file ddsDemoPubSubTypes.cpp
 * This header file contains the implementation of the serialization functions.
 *
 * This file was generated by the tool fastcdrgen.
 */


#include <fastcdr/FastBuffer.h>
#include <fastcdr/Cdr.h>

#include "ddsDemoPubSubTypes.h"

LamppostsCtrlPubSubType::LamppostsCtrlPubSubType() {
    setName("LamppostsCtrl");
    m_typeSize = (uint32_t)LamppostsCtrl::getMaxCdrSerializedSize() + 4 /*encapsulation*/;
    m_isGetKeyDefined = LamppostsCtrl::isKeyDefined();
    m_keyBuffer = (unsigned char*)malloc(LamppostsCtrl::getKeyMaxCdrSerializedSize()>16 ? LamppostsCtrl::getKeyMaxCdrSerializedSize() : 16);
}

LamppostsCtrlPubSubType::~LamppostsCtrlPubSubType() {
    if(m_keyBuffer!=nullptr)
        free(m_keyBuffer);
}

bool LamppostsCtrlPubSubType::serialize(void *data, SerializedPayload_t *payload) {
    LamppostsCtrl *p_type = (LamppostsCtrl*) data;
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload->data, payload->max_size); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    // Serialize encapsulation
    ser.serialize_encapsulation();
    p_type->serialize(ser); // Serialize the object:
    payload->length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    return true;
}

bool LamppostsCtrlPubSubType::deserialize(SerializedPayload_t* payload, void* data) {
    LamppostsCtrl* p_type = (LamppostsCtrl*) data; 	//Convert DATA to pointer of your type
    eprosima::fastcdr::FastBuffer fastbuffer((char*)payload->data, payload->length); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr deser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that deserializes the data.
    // Deserialize encapsulation.
    deser.read_encapsulation();
    payload->encapsulation = deser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    p_type->deserialize(deser); //Deserialize the object:
    return true;
}

std::function<uint32_t()> LamppostsCtrlPubSubType::getSerializedSizeProvider(void* data) {
    return [data]() -> uint32_t
    {
        return (uint32_t)type::getCdrSerializedSize(*static_cast<LamppostsCtrl*>(data)) + 4 /*encapsulation*/;
    };
}

void* LamppostsCtrlPubSubType::createData() {
    return (void*)new LamppostsCtrl();
}

void LamppostsCtrlPubSubType::deleteData(void* data) {
    delete((LamppostsCtrl*)data);
}

bool LamppostsCtrlPubSubType::getKey(void *data, InstanceHandle_t* handle) {
    if(!m_isGetKeyDefined)
        return false;
    LamppostsCtrl* p_type = (LamppostsCtrl*) data;
    eprosima::fastcdr::FastBuffer fastbuffer((char*)m_keyBuffer,LamppostsCtrl::getKeyMaxCdrSerializedSize()); 	// Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS); 	// Object that serializes the data.
    p_type->serializeKey(ser);
    if(LamppostsCtrl::getKeyMaxCdrSerializedSize()>16)	{
        m_md5.init();
        m_md5.update(m_keyBuffer,(unsigned int)ser.getSerializedDataLength());
        m_md5.finalize();
        for(uint8_t i = 0;i<16;++i)    	{
            handle->value[i] = m_md5.digest[i];
        }
    }
    else    {
        for(uint8_t i = 0;i<16;++i)    	{
            handle->value[i] = m_keyBuffer[i];
        }
    }
    return true;
}

LamppostsBCPubSubType::LamppostsBCPubSubType() {
    setName("LamppostsBC");
    m_typeSize = (uint32_t)LamppostsBC::getMaxCdrSerializedSize() + 4 /*encapsulation*/;
    m_isGetKeyDefined = LamppostsBC::isKeyDefined();
    m_keyBuffer = (unsigned char*)malloc(LamppostsBC::getKeyMaxCdrSerializedSize()>16 ? LamppostsBC::getKeyMaxCdrSerializedSize() : 16);
}

LamppostsBCPubSubType::~LamppostsBCPubSubType() {
    if(m_keyBuffer!=nullptr)
        free(m_keyBuffer);
}

bool LamppostsBCPubSubType::serialize(void *data, SerializedPayload_t *payload) {
    LamppostsBC *p_type = (LamppostsBC*) data;
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload->data, payload->max_size); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    // Serialize encapsulation
    ser.serialize_encapsulation();
    p_type->serialize(ser); // Serialize the object:
    payload->length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    return true;
}

bool LamppostsBCPubSubType::deserialize(SerializedPayload_t* payload, void* data) {
    LamppostsBC* p_type = (LamppostsBC*) data; 	//Convert DATA to pointer of your type
    eprosima::fastcdr::FastBuffer fastbuffer((char*)payload->data, payload->length); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr deser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that deserializes the data.
    // Deserialize encapsulation.
    deser.read_encapsulation();
    payload->encapsulation = deser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    p_type->deserialize(deser); //Deserialize the object:
    return true;
}

std::function<uint32_t()> LamppostsBCPubSubType::getSerializedSizeProvider(void* data) {
    return [data]() -> uint32_t
    {
        return (uint32_t)type::getCdrSerializedSize(*static_cast<LamppostsBC*>(data)) + 4 /*encapsulation*/;
    };
}

void* LamppostsBCPubSubType::createData() {
    return (void*)new LamppostsBC();
}

void LamppostsBCPubSubType::deleteData(void* data) {
    delete((LamppostsBC*)data);
}

bool LamppostsBCPubSubType::getKey(void *data, InstanceHandle_t* handle) {
    if(!m_isGetKeyDefined)
        return false;
    LamppostsBC* p_type = (LamppostsBC*) data;
    eprosima::fastcdr::FastBuffer fastbuffer((char*)m_keyBuffer,LamppostsBC::getKeyMaxCdrSerializedSize()); 	// Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS); 	// Object that serializes the data.
    p_type->serializeKey(ser);
    if(LamppostsBC::getKeyMaxCdrSerializedSize()>16)	{
        m_md5.init();
        m_md5.update(m_keyBuffer,(unsigned int)ser.getSerializedDataLength());
        m_md5.finalize();
        for(uint8_t i = 0;i<16;++i)    	{
            handle->value[i] = m_md5.digest[i];
        }
    }
    else    {
        for(uint8_t i = 0;i<16;++i)    	{
            handle->value[i] = m_keyBuffer[i];
        }
    }
    return true;
}

TrafficlightPubSubType::TrafficlightPubSubType() {
    setName("Trafficlight");
    m_typeSize = (uint32_t)Trafficlight::getMaxCdrSerializedSize() + 4 /*encapsulation*/;
    m_isGetKeyDefined = Trafficlight::isKeyDefined();
    m_keyBuffer = (unsigned char*)malloc(Trafficlight::getKeyMaxCdrSerializedSize()>16 ? Trafficlight::getKeyMaxCdrSerializedSize() : 16);
}

TrafficlightPubSubType::~TrafficlightPubSubType() {
    if(m_keyBuffer!=nullptr)
        free(m_keyBuffer);
}

bool TrafficlightPubSubType::serialize(void *data, SerializedPayload_t *payload) {
    Trafficlight *p_type = (Trafficlight*) data;
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload->data, payload->max_size); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    // Serialize encapsulation
    ser.serialize_encapsulation();
    p_type->serialize(ser); // Serialize the object:
    payload->length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    return true;
}

bool TrafficlightPubSubType::deserialize(SerializedPayload_t* payload, void* data) {
    Trafficlight* p_type = (Trafficlight*) data; 	//Convert DATA to pointer of your type
    eprosima::fastcdr::FastBuffer fastbuffer((char*)payload->data, payload->length); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr deser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that deserializes the data.
    // Deserialize encapsulation.
    deser.read_encapsulation();
    payload->encapsulation = deser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    p_type->deserialize(deser); //Deserialize the object:
    return true;
}

std::function<uint32_t()> TrafficlightPubSubType::getSerializedSizeProvider(void* data) {
    return [data]() -> uint32_t
    {
        return (uint32_t)type::getCdrSerializedSize(*static_cast<Trafficlight*>(data)) + 4 /*encapsulation*/;
    };
}

void* TrafficlightPubSubType::createData() {
    return (void*)new Trafficlight();
}

void TrafficlightPubSubType::deleteData(void* data) {
    delete((Trafficlight*)data);
}

bool TrafficlightPubSubType::getKey(void *data, InstanceHandle_t* handle) {
    if(!m_isGetKeyDefined)
        return false;
    Trafficlight* p_type = (Trafficlight*) data;
    eprosima::fastcdr::FastBuffer fastbuffer((char*)m_keyBuffer,Trafficlight::getKeyMaxCdrSerializedSize()); 	// Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS); 	// Object that serializes the data.
    p_type->serializeKey(ser);
    if(Trafficlight::getKeyMaxCdrSerializedSize()>16)	{
        m_md5.init();
        m_md5.update(m_keyBuffer,(unsigned int)ser.getSerializedDataLength());
        m_md5.finalize();
        for(uint8_t i = 0;i<16;++i)    	{
            handle->value[i] = m_md5.digest[i];
        }
    }
    else    {
        for(uint8_t i = 0;i<16;++i)    	{
            handle->value[i] = m_keyBuffer[i];
        }
    }
    return true;
}

PriorityPubSubType::PriorityPubSubType() {
    setName("Priority");
    m_typeSize = (uint32_t)Priority::getMaxCdrSerializedSize() + 4 /*encapsulation*/;
    m_isGetKeyDefined = Priority::isKeyDefined();
    m_keyBuffer = (unsigned char*)malloc(Priority::getKeyMaxCdrSerializedSize()>16 ? Priority::getKeyMaxCdrSerializedSize() : 16);
}

PriorityPubSubType::~PriorityPubSubType() {
    if(m_keyBuffer!=nullptr)
        free(m_keyBuffer);
}

bool PriorityPubSubType::serialize(void *data, SerializedPayload_t *payload) {
    Priority *p_type = (Priority*) data;
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload->data, payload->max_size); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    // Serialize encapsulation
    ser.serialize_encapsulation();
    p_type->serialize(ser); // Serialize the object:
    payload->length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    return true;
}

bool PriorityPubSubType::deserialize(SerializedPayload_t* payload, void* data) {
    Priority* p_type = (Priority*) data; 	//Convert DATA to pointer of your type
    eprosima::fastcdr::FastBuffer fastbuffer((char*)payload->data, payload->length); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr deser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that deserializes the data.
    // Deserialize encapsulation.
    deser.read_encapsulation();
    payload->encapsulation = deser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    p_type->deserialize(deser); //Deserialize the object:
    return true;
}

std::function<uint32_t()> PriorityPubSubType::getSerializedSizeProvider(void* data) {
    return [data]() -> uint32_t
    {
        return (uint32_t)type::getCdrSerializedSize(*static_cast<Priority*>(data)) + 4 /*encapsulation*/;
    };
}

void* PriorityPubSubType::createData() {
    return (void*)new Priority();
}

void PriorityPubSubType::deleteData(void* data) {
    delete((Priority*)data);
}

bool PriorityPubSubType::getKey(void *data, InstanceHandle_t* handle) {
    if(!m_isGetKeyDefined)
        return false;
    Priority* p_type = (Priority*) data;
    eprosima::fastcdr::FastBuffer fastbuffer((char*)m_keyBuffer,Priority::getKeyMaxCdrSerializedSize()); 	// Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS); 	// Object that serializes the data.
    p_type->serializeKey(ser);
    if(Priority::getKeyMaxCdrSerializedSize()>16)	{
        m_md5.init();
        m_md5.update(m_keyBuffer,(unsigned int)ser.getSerializedDataLength());
        m_md5.finalize();
        for(uint8_t i = 0;i<16;++i)    	{
            handle->value[i] = m_md5.digest[i];
        }
    }
    else    {
        for(uint8_t i = 0;i<16;++i)    	{
            handle->value[i] = m_keyBuffer[i];
        }
    }
    return true;
}

HumidityPubSubType::HumidityPubSubType() {
    setName("Humidity");
    m_typeSize = (uint32_t)Humidity::getMaxCdrSerializedSize() + 4 /*encapsulation*/;
    m_isGetKeyDefined = Humidity::isKeyDefined();
    m_keyBuffer = (unsigned char*)malloc(Humidity::getKeyMaxCdrSerializedSize()>16 ? Humidity::getKeyMaxCdrSerializedSize() : 16);
}

HumidityPubSubType::~HumidityPubSubType() {
    if(m_keyBuffer!=nullptr)
        free(m_keyBuffer);
}

bool HumidityPubSubType::serialize(void *data, SerializedPayload_t *payload) {
    Humidity *p_type = (Humidity*) data;
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload->data, payload->max_size); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    // Serialize encapsulation
    ser.serialize_encapsulation();
    p_type->serialize(ser); // Serialize the object:
    payload->length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    return true;
}

bool HumidityPubSubType::deserialize(SerializedPayload_t* payload, void* data) {
    Humidity* p_type = (Humidity*) data; 	//Convert DATA to pointer of your type
    eprosima::fastcdr::FastBuffer fastbuffer((char*)payload->data, payload->length); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr deser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that deserializes the data.
    // Deserialize encapsulation.
    deser.read_encapsulation();
    payload->encapsulation = deser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    p_type->deserialize(deser); //Deserialize the object:
    return true;
}

std::function<uint32_t()> HumidityPubSubType::getSerializedSizeProvider(void* data) {
    return [data]() -> uint32_t
    {
        return (uint32_t)type::getCdrSerializedSize(*static_cast<Humidity*>(data)) + 4 /*encapsulation*/;
    };
}

void* HumidityPubSubType::createData() {
    return (void*)new Humidity();
}

void HumidityPubSubType::deleteData(void* data) {
    delete((Humidity*)data);
}

bool HumidityPubSubType::getKey(void *data, InstanceHandle_t* handle) {
    if(!m_isGetKeyDefined)
        return false;
    Humidity* p_type = (Humidity*) data;
    eprosima::fastcdr::FastBuffer fastbuffer((char*)m_keyBuffer,Humidity::getKeyMaxCdrSerializedSize()); 	// Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS); 	// Object that serializes the data.
    p_type->serializeKey(ser);
    if(Humidity::getKeyMaxCdrSerializedSize()>16)	{
        m_md5.init();
        m_md5.update(m_keyBuffer,(unsigned int)ser.getSerializedDataLength());
        m_md5.finalize();
        for(uint8_t i = 0;i<16;++i)    	{
            handle->value[i] = m_md5.digest[i];
        }
    }
    else    {
        for(uint8_t i = 0;i<16;++i)    	{
            handle->value[i] = m_keyBuffer[i];
        }
    }
    return true;
}

TemperaturePubSubType::TemperaturePubSubType() {
    setName("Temperature");
    m_typeSize = (uint32_t)Temperature::getMaxCdrSerializedSize() + 4 /*encapsulation*/;
    m_isGetKeyDefined = Temperature::isKeyDefined();
    m_keyBuffer = (unsigned char*)malloc(Temperature::getKeyMaxCdrSerializedSize()>16 ? Temperature::getKeyMaxCdrSerializedSize() : 16);
}

TemperaturePubSubType::~TemperaturePubSubType() {
    if(m_keyBuffer!=nullptr)
        free(m_keyBuffer);
}

bool TemperaturePubSubType::serialize(void *data, SerializedPayload_t *payload) {
    Temperature *p_type = (Temperature*) data;
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload->data, payload->max_size); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    // Serialize encapsulation
    ser.serialize_encapsulation();
    p_type->serialize(ser); // Serialize the object:
    payload->length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    return true;
}

bool TemperaturePubSubType::deserialize(SerializedPayload_t* payload, void* data) {
    Temperature* p_type = (Temperature*) data; 	//Convert DATA to pointer of your type
    eprosima::fastcdr::FastBuffer fastbuffer((char*)payload->data, payload->length); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr deser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that deserializes the data.
    // Deserialize encapsulation.
    deser.read_encapsulation();
    payload->encapsulation = deser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    p_type->deserialize(deser); //Deserialize the object:
    return true;
}

std::function<uint32_t()> TemperaturePubSubType::getSerializedSizeProvider(void* data) {
    return [data]() -> uint32_t
    {
        return (uint32_t)type::getCdrSerializedSize(*static_cast<Temperature*>(data)) + 4 /*encapsulation*/;
    };
}

void* TemperaturePubSubType::createData() {
    return (void*)new Temperature();
}

void TemperaturePubSubType::deleteData(void* data) {
    delete((Temperature*)data);
}

bool TemperaturePubSubType::getKey(void *data, InstanceHandle_t* handle) {
    if(!m_isGetKeyDefined)
        return false;
    Temperature* p_type = (Temperature*) data;
    eprosima::fastcdr::FastBuffer fastbuffer((char*)m_keyBuffer,Temperature::getKeyMaxCdrSerializedSize()); 	// Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS); 	// Object that serializes the data.
    p_type->serializeKey(ser);
    if(Temperature::getKeyMaxCdrSerializedSize()>16)	{
        m_md5.init();
        m_md5.update(m_keyBuffer,(unsigned int)ser.getSerializedDataLength());
        m_md5.finalize();
        for(uint8_t i = 0;i<16;++i)    	{
            handle->value[i] = m_md5.digest[i];
        }
    }
    else    {
        for(uint8_t i = 0;i<16;++i)    	{
            handle->value[i] = m_keyBuffer[i];
        }
    }
    return true;
}

LightPubSubType::LightPubSubType() {
    setName("Light");
    m_typeSize = (uint32_t)Light::getMaxCdrSerializedSize() + 4 /*encapsulation*/;
    m_isGetKeyDefined = Light::isKeyDefined();
    m_keyBuffer = (unsigned char*)malloc(Light::getKeyMaxCdrSerializedSize()>16 ? Light::getKeyMaxCdrSerializedSize() : 16);
}

LightPubSubType::~LightPubSubType() {
    if(m_keyBuffer!=nullptr)
        free(m_keyBuffer);
}

bool LightPubSubType::serialize(void *data, SerializedPayload_t *payload) {
    Light *p_type = (Light*) data;
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload->data, payload->max_size); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    // Serialize encapsulation
    ser.serialize_encapsulation();
    p_type->serialize(ser); // Serialize the object:
    payload->length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    return true;
}

bool LightPubSubType::deserialize(SerializedPayload_t* payload, void* data) {
    Light* p_type = (Light*) data; 	//Convert DATA to pointer of your type
    eprosima::fastcdr::FastBuffer fastbuffer((char*)payload->data, payload->length); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr deser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that deserializes the data.
    // Deserialize encapsulation.
    deser.read_encapsulation();
    payload->encapsulation = deser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    p_type->deserialize(deser); //Deserialize the object:
    return true;
}

std::function<uint32_t()> LightPubSubType::getSerializedSizeProvider(void* data) {
    return [data]() -> uint32_t
    {
        return (uint32_t)type::getCdrSerializedSize(*static_cast<Light*>(data)) + 4 /*encapsulation*/;
    };
}

void* LightPubSubType::createData() {
    return (void*)new Light();
}

void LightPubSubType::deleteData(void* data) {
    delete((Light*)data);
}

bool LightPubSubType::getKey(void *data, InstanceHandle_t* handle) {
    if(!m_isGetKeyDefined)
        return false;
    Light* p_type = (Light*) data;
    eprosima::fastcdr::FastBuffer fastbuffer((char*)m_keyBuffer,Light::getKeyMaxCdrSerializedSize()); 	// Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS); 	// Object that serializes the data.
    p_type->serializeKey(ser);
    if(Light::getKeyMaxCdrSerializedSize()>16)	{
        m_md5.init();
        m_md5.update(m_keyBuffer,(unsigned int)ser.getSerializedDataLength());
        m_md5.finalize();
        for(uint8_t i = 0;i<16;++i)    	{
            handle->value[i] = m_md5.digest[i];
        }
    }
    else    {
        for(uint8_t i = 0;i<16;++i)    	{
            handle->value[i] = m_keyBuffer[i];
        }
    }
    return true;
}

SpeedingPubSubType::SpeedingPubSubType() {
    setName("Speeding");
    m_typeSize = (uint32_t)Speeding::getMaxCdrSerializedSize() + 4 /*encapsulation*/;
    m_isGetKeyDefined = Speeding::isKeyDefined();
    m_keyBuffer = (unsigned char*)malloc(Speeding::getKeyMaxCdrSerializedSize()>16 ? Speeding::getKeyMaxCdrSerializedSize() : 16);
}

SpeedingPubSubType::~SpeedingPubSubType() {
    if(m_keyBuffer!=nullptr)
        free(m_keyBuffer);
}

bool SpeedingPubSubType::serialize(void *data, SerializedPayload_t *payload) {
    Speeding *p_type = (Speeding*) data;
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload->data, payload->max_size); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    // Serialize encapsulation
    ser.serialize_encapsulation();
    p_type->serialize(ser); // Serialize the object:
    payload->length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    return true;
}

bool SpeedingPubSubType::deserialize(SerializedPayload_t* payload, void* data) {
    Speeding* p_type = (Speeding*) data; 	//Convert DATA to pointer of your type
    eprosima::fastcdr::FastBuffer fastbuffer((char*)payload->data, payload->length); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr deser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that deserializes the data.
    // Deserialize encapsulation.
    deser.read_encapsulation();
    payload->encapsulation = deser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    p_type->deserialize(deser); //Deserialize the object:
    return true;
}

std::function<uint32_t()> SpeedingPubSubType::getSerializedSizeProvider(void* data) {
    return [data]() -> uint32_t
    {
        return (uint32_t)type::getCdrSerializedSize(*static_cast<Speeding*>(data)) + 4 /*encapsulation*/;
    };
}

void* SpeedingPubSubType::createData() {
    return (void*)new Speeding();
}

void SpeedingPubSubType::deleteData(void* data) {
    delete((Speeding*)data);
}

bool SpeedingPubSubType::getKey(void *data, InstanceHandle_t* handle) {
    if(!m_isGetKeyDefined)
        return false;
    Speeding* p_type = (Speeding*) data;
    eprosima::fastcdr::FastBuffer fastbuffer((char*)m_keyBuffer,Speeding::getKeyMaxCdrSerializedSize()); 	// Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS); 	// Object that serializes the data.
    p_type->serializeKey(ser);
    if(Speeding::getKeyMaxCdrSerializedSize()>16)	{
        m_md5.init();
        m_md5.update(m_keyBuffer,(unsigned int)ser.getSerializedDataLength());
        m_md5.finalize();
        for(uint8_t i = 0;i<16;++i)    	{
            handle->value[i] = m_md5.digest[i];
        }
    }
    else    {
        for(uint8_t i = 0;i<16;++i)    	{
            handle->value[i] = m_keyBuffer[i];
        }
    }
    return true;
}

GeoLocationPubSubType::GeoLocationPubSubType() {
    setName("GeoLocation");
    m_typeSize = (uint32_t)GeoLocation::getMaxCdrSerializedSize() + 4 /*encapsulation*/;
    m_isGetKeyDefined = GeoLocation::isKeyDefined();
    m_keyBuffer = (unsigned char*)malloc(GeoLocation::getKeyMaxCdrSerializedSize()>16 ? GeoLocation::getKeyMaxCdrSerializedSize() : 16);
}

GeoLocationPubSubType::~GeoLocationPubSubType() {
    if(m_keyBuffer!=nullptr)
        free(m_keyBuffer);
}

bool GeoLocationPubSubType::serialize(void *data, SerializedPayload_t *payload) {
    GeoLocation *p_type = (GeoLocation*) data;
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload->data, payload->max_size); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    // Serialize encapsulation
    ser.serialize_encapsulation();
    p_type->serialize(ser); // Serialize the object:
    payload->length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    return true;
}

bool GeoLocationPubSubType::deserialize(SerializedPayload_t* payload, void* data) {
    GeoLocation* p_type = (GeoLocation*) data; 	//Convert DATA to pointer of your type
    eprosima::fastcdr::FastBuffer fastbuffer((char*)payload->data, payload->length); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr deser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that deserializes the data.
    // Deserialize encapsulation.
    deser.read_encapsulation();
    payload->encapsulation = deser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    p_type->deserialize(deser); //Deserialize the object:
    return true;
}

std::function<uint32_t()> GeoLocationPubSubType::getSerializedSizeProvider(void* data) {
    return [data]() -> uint32_t
    {
        return (uint32_t)type::getCdrSerializedSize(*static_cast<GeoLocation*>(data)) + 4 /*encapsulation*/;
    };
}

void* GeoLocationPubSubType::createData() {
    return (void*)new GeoLocation();
}

void GeoLocationPubSubType::deleteData(void* data) {
    delete((GeoLocation*)data);
}

bool GeoLocationPubSubType::getKey(void *data, InstanceHandle_t* handle) {
    if(!m_isGetKeyDefined)
        return false;
    GeoLocation* p_type = (GeoLocation*) data;
    eprosima::fastcdr::FastBuffer fastbuffer((char*)m_keyBuffer,GeoLocation::getKeyMaxCdrSerializedSize()); 	// Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS); 	// Object that serializes the data.
    p_type->serializeKey(ser);
    if(GeoLocation::getKeyMaxCdrSerializedSize()>16)	{
        m_md5.init();
        m_md5.update(m_keyBuffer,(unsigned int)ser.getSerializedDataLength());
        m_md5.finalize();
        for(uint8_t i = 0;i<16;++i)    	{
            handle->value[i] = m_md5.digest[i];
        }
    }
    else    {
        for(uint8_t i = 0;i<16;++i)    	{
            handle->value[i] = m_keyBuffer[i];
        }
    }
    return true;
}

CarparkPubSubType::CarparkPubSubType() {
    setName("Carpark");
    m_typeSize = (uint32_t)Carpark::getMaxCdrSerializedSize() + 4 /*encapsulation*/;
    m_isGetKeyDefined = Carpark::isKeyDefined();
    m_keyBuffer = (unsigned char*)malloc(Carpark::getKeyMaxCdrSerializedSize()>16 ? Carpark::getKeyMaxCdrSerializedSize() : 16);
}

CarparkPubSubType::~CarparkPubSubType() {
    if(m_keyBuffer!=nullptr)
        free(m_keyBuffer);
}

bool CarparkPubSubType::serialize(void *data, SerializedPayload_t *payload) {
    Carpark *p_type = (Carpark*) data;
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload->data, payload->max_size); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
    payload->encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    // Serialize encapsulation
    ser.serialize_encapsulation();
    p_type->serialize(ser); // Serialize the object:
    payload->length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
    return true;
}

bool CarparkPubSubType::deserialize(SerializedPayload_t* payload, void* data) {
    Carpark* p_type = (Carpark*) data; 	//Convert DATA to pointer of your type
    eprosima::fastcdr::FastBuffer fastbuffer((char*)payload->data, payload->length); // Object that manages the raw buffer.
    eprosima::fastcdr::Cdr deser(fastbuffer, eprosima::fastcdr::Cdr::DEFAULT_ENDIAN,
            eprosima::fastcdr::Cdr::DDS_CDR); // Object that deserializes the data.
    // Deserialize encapsulation.
    deser.read_encapsulation();
    payload->encapsulation = deser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;
    p_type->deserialize(deser); //Deserialize the object:
    return true;
}

std::function<uint32_t()> CarparkPubSubType::getSerializedSizeProvider(void* data) {
    return [data]() -> uint32_t
    {
        return (uint32_t)type::getCdrSerializedSize(*static_cast<Carpark*>(data)) + 4 /*encapsulation*/;
    };
}

void* CarparkPubSubType::createData() {
    return (void*)new Carpark();
}

void CarparkPubSubType::deleteData(void* data) {
    delete((Carpark*)data);
}

bool CarparkPubSubType::getKey(void *data, InstanceHandle_t* handle) {
    if(!m_isGetKeyDefined)
        return false;
    Carpark* p_type = (Carpark*) data;
    eprosima::fastcdr::FastBuffer fastbuffer((char*)m_keyBuffer,Carpark::getKeyMaxCdrSerializedSize()); 	// Object that manages the raw buffer.
    eprosima::fastcdr::Cdr ser(fastbuffer, eprosima::fastcdr::Cdr::BIG_ENDIANNESS); 	// Object that serializes the data.
    p_type->serializeKey(ser);
    if(Carpark::getKeyMaxCdrSerializedSize()>16)	{
        m_md5.init();
        m_md5.update(m_keyBuffer,(unsigned int)ser.getSerializedDataLength());
        m_md5.finalize();
        for(uint8_t i = 0;i<16;++i)    	{
            handle->value[i] = m_md5.digest[i];
        }
    }
    else    {
        for(uint8_t i = 0;i<16;++i)    	{
            handle->value[i] = m_keyBuffer[i];
        }
    }
    return true;
}

