#pragma once

#include "../manager_interface.h"

#include "directx.h"

namespace gtamp
{
namespace core
{
namespace graphics
{
class manager : public manager_interface
{
public:
	manager(core *core);

	virtual void init();

	std::shared_ptr<gtamp::core::graphics::directx> directx()
	{
		return _directx;
	};

private:
	std::shared_ptr<gtamp::core::graphics::directx> _directx;
};
}; // namespace graphics
}; // namespace core
}; // namespace gtamp