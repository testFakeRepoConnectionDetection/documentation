#include "flows.hpp"

namespace documentation {

Flow accept_trade_from_booking() {
  return {"Booking", "/api/v1/confirmations", kDataTrade, kFrequencyRealTime};
}

Flow accept_cashflow_from_settlement() {
  return {"Settlement", "/api/v1/cashflows", kDataCashflow, kFrequencyRealTime};
}

Flow publish_confirmation_to_finance() {
  return {"Finance", "https://finance.internal/api/v1/confirmations", kDataTrade, kFrequencyMonthly};
}

}  // namespace documentation
