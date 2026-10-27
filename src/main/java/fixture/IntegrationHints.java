package fixture;

import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

/**
 * Inbound trade from Booking and cashflow from Settlement.
 * Outbound trade confirmation to Finance.
 *
 * <p>Edge fields: data trade frequency real-time from Booking.
 * data cashflow frequency real-time from Settlement.
 * data trade frequency monthly to Finance.
 */
@RestController
@RequestMapping("/api/v1/confirmations")
public class IntegrationHints {

  // POST /api/v1/confirmations from Booking — data trade, frequency real-time
  // POST /api/v1/cashflows from Settlement — data cashflow, frequency real-time
  // HTTP POST finance /api/v1/confirmations — data trade, frequency monthly
}
