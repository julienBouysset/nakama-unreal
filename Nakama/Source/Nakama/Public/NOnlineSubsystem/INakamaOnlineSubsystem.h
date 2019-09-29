/*
 * Copyright 2019 The Nakama Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "OnlinePartyInterface.h"
#include "NOnlineSubsystem/INakamaOnlinePartyJoinInfo.h"
#include "nakama-cpp/Nakama.h"

namespace Nakama {

    class INakamaOnlineSubsystem
    {
    public:
        virtual TSharedPtr<IOnlinePartySystem> createOnlinePartySystem(NClientPtr client, NRtClientPtr rtClient, NSessionPtr session) = 0;

        virtual TSharedRef<const FUniqueNetId> getPlayerId(NSessionPtr session) = 0;

        virtual TSharedRef<const FOnlinePartyId> getPartyId(FString partyId) = 0;

        virtual TSharedPtr<INakamaOnlinePartyJoinInfo> createPartyJoinInfo() = 0;
    };

}