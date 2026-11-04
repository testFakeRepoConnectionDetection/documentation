#pragma once

#include <string>

// Trade documentation.
// Booking calls /api/v1/confirmations with a trade in real time.
// Settlement calls /api/v1/cashflows with a cashflow in real time.
// Finance receives the trade confirmation monthly on /api/v1/confirmations.

namespace documentation {

struct Flow {
  std::string peer;
  std::string channel;
  std::string data;
  std::string frequency;
};

inline constexpr const char* kBusinessFunction = "BACK_OFFICE";
inline constexpr const char* kPillar = "Trade Processing";
inline constexpr const char* kDataTrade = "trade";
inline constexpr const char* kDataCashflow = "cashflow";
inline constexpr const char* kFrequencyRealTime = "real-time";
inline constexpr const char* kFrequencyMonthly = "monthly";

Flow accept_trade_from_booking();
Flow accept_cashflow_from_settlement();
Flow publish_confirmation_to_finance();

}  // namespace documentation
