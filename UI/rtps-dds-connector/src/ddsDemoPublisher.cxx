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
 * @file ddsDemoPublisher.cpp
 * This file contains the implementation of the publisher functions.
 *
 * This file was generated by the tool fastcdrgen.
 */
#define DATASIZE 10

#include <fastrtps/participant/Participant.h>
#include <fastrtps/attributes/ParticipantAttributes.h>
#include <fastrtps/publisher/Publisher.h>
#include <fastrtps/attributes/PublisherAttributes.h>

#include <fastrtps/Domain.h>

#include <fastrtps/utils/eClock.h>

#include "ddsDemoPublisher.h"


ddsDemoPublisher::ddsDemoPublisher() : mp_participant(nullptr), LPCTRL_writer(nullptr){}

ddsDemoPublisher::~ddsDemoPublisher() {	Domain::removeParticipant(mp_participant);}

bool ddsDemoPublisher::init()
{
	// Create RTPSParticipant
	
	ParticipantAttributes PParam;
	PParam.rtps.builtin.domainId = 0;
	PParam.rtps.builtin.leaseDuration = c_TimeInfinite;
	PParam.rtps.setName("Participant_publisher");  //You can put here the name you want
	mp_participant = Domain::createParticipant(PParam);
	if(mp_participant == nullptr)
		return false;
	
	//Register the type
	Domain::registerType(mp_participant,(TopicDataType*) &LPCTRL_type);
	// Create Publisher

	//Lampposts
	PublisherAttributes Wparam2;
	Wparam2.topic.topicKind = WITH_KEY;
	Wparam2.topic.topicDataType = LPCTRL_type.getName();  //This type MUST be registered
	Wparam2.topic.topicName = LPCTRL_type.getName();
	LPCTRL_writer = Domain::createPublisher(mp_participant,Wparam2,(PublisherListener*)&m_listener);
	if(LPCTRL_writer == nullptr)
		return false;
	std::cout << "LamppostsCtrl writer initiated" << std::endl;

	
	return true;
}

void ddsDemoPublisher::PubListener::onPublicationMatched(Publisher* pub,MatchingInfo& info)
{
	if (info.status == MATCHED_MATCHING)
	{
		n_matched++;
		std::cout << "Publisher matched: " << pub->getAttributes().topic.getTopicName() << std::endl;
	}
	else
	{
		n_matched--;
		std::cout << "Publisher unmatched" << std::endl;
	}
}

void ddsDemoPublisher::run()
{
	while(m_listener.n_matched == 0)
	{
		eClock::my_sleep(250); // Sleep 250 ms
	}
	

	// Publication code
	
	LamppostsCtrl LPCTRL;

	std::string clusterID;
	char value;	
	
	/* Initialize your structure here */
	
	int msgsent = 0;
	char ch = 'y';
	
	while(1){ //TODO change this unbreakable loop
		std::cin >> clusterID;
		std::cin >> value;
		LPCTRL.clusterID(clusterID);
		if(value == '1')
			LPCTRL.value(1);
		else
			LPCTRL.value(0);
		LPCTRL_writer->write(&LPCTRL);  ++msgsent;
	}
	
}