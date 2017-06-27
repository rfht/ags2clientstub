// AGS2ClientStub
// Game-client plugin stub for AGS
// Copyright � 2014-2017 MonkeyMoto Productions, Inc.

#include "StatsStub.h"
using namespace AGS2Client::Stub;

StatsStub& StatsStub::GetStatsStub() noexcept
{
	static StatsStub stub;
	return stub;
}

int StatsStub::GetIntStat(char const *) const noexcept
{
	return 0;
}

float StatsStub::GetFloatStat(char const*) const noexcept
{
	return 0.0f;
}

float StatsStub::GetAverageRateStat(char const*) const noexcept
{
	return 0.0f;
}

bool StatsStub::SetIntStat(char const*, int) const noexcept
{
	return false;
}

bool StatsStub::SetFloatStat(char const*, float) const noexcept
{
	return false;
}

bool StatsStub::UpdateAverageRateStat(char const*, float, float) const noexcept
{
	return false;
}
