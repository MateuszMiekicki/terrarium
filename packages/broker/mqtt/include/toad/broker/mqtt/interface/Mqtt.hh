#pragma once

namespace toad::broker::interface
{
class Mqtt
{
  public:
    virtual ~Mqtt() = default;
    virtual bool start() = 0;
    virtual bool stop() = 0;
    virtual bool restart() = 0;
};
} // namespace toad::broker::interface