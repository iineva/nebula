/*
 *  Copyright (c) 2018, https://github.com/nebula-im/nebula
 *  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nebula/net/base_server.h"
#include "nebula/net/handler/echo/udp_echo_handler.h"

//using namespace nebula;

class UdpEchoServerTest : public nebula::BaseServer {
public:
  UdpEchoServerTest() = default;
  virtual ~UdpEchoServerTest() override = default;

protected:
  bool Initialize() override {
    RegisterService("udp_echo_server_test", "udp_server", "echo");

    BaseServer::Initialize();
    return true;
  }

  bool Run() override {
    BaseServer::Run();
    return true;
  }
};

////////////////////////////////////////////////////////////////////////////
int main(int argc, char* argv[]) {
  return nebula::DoMain<UdpEchoServerTest>(argc, argv);
}

