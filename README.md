# Documentation (fixture)

Business function: `BACK_OFFICE` (`app.business_function`).
Pillar: `Trade Processing` (`app.pillar`).

Trade documentation.

## Integrations (topology)

- Exposes `/api/v1/confirmations` called by **Booking**.
- Exposes `/api/v1/cashflows` called by **Settlement**.
- Pushes the monthly trade confirmation to **Finance** on `/api/v1/confirmations`.

## Data transiting on flows (Data Model fixture)

| Source | Kind | Channel | data | frequency |
|--------|------|---------|------|-----------|
| Booking | API (inbound) | /api/v1/confirmations | `trade` | `real-time` |
| Settlement | API (inbound) | /api/v1/cashflows | `cashflow` | `real-time` |
| Finance | API (outbound) | /api/v1/confirmations | `trade` | `monthly` |

See `TransitDataTypes.java` and `application.yml` (`data`, `frequency`).
