# Session 8: Task 4 - Responsive Testing Notes

This document describes the changes observed in the product card layout, font size, and padding at each major device breakpoint.

---

## 1. Desktop Width (Width > 1200px)
- **Active Breakpoint Indicator**: Green badge (`Desktop (>1200px)`)
- **Padding**: Large internal spacing (`35px`) inside the card container.
- **Font Size**:
  - Heading (`h2`): `26px` for high visibility on wide displays.
  - Description: `16px` for comfortable reading from a distance.
  - Price & Button: `24px` price and `16px` button text.
- **Layout**: Horizontal flow with plenty of breathing room. The Buy button sits side-by-side with the price.

---

## 2. Laptop / Large Tablet Width (900px - 1200px)
- **Active Breakpoint Indicator**: Blue badge (`Laptop/Large Tablet (900px - 1200px)`)
- **Padding**: Spacing scales down to `28px` to save screen estate.
- **Font Size**:
  - Heading (`h2`): Scales down to `22px` to prevent text wrapping into too many lines.
  - Description: Scales down to `14px`.
  - Price & Button: Price is `22px`, and button text is `14px`.
- **Layout**: The card maintains a spacious desktop appearance but is more compact, ensuring it fits easily on smaller laptop screens or iPad Pros.

---

## 3. Medium Tablet Width (600px - 900px)
- **Active Breakpoint Indicator**: Yellow badge (`Medium Tablet (600px - 900px)`)
- **Padding**: Inner card padding is set to `22px`.
- **Font Size**:
  - Heading (`h2`): Scales down to `19px`.
  - Description: Remains at a readable `13px` size.
  - Price & Button: Price is `20px`, and button text is `13px`.
- **Layout**: Fits tablet viewports nicely. Elements align center-vertically with reduced gaps.

---

## 4. Mobile Phone Width (Width < 600px)
- **Active Breakpoint Indicator**: Red badge (`Mobile Phone (<600px)`)
- **Padding**: Padding reduces to a minimal `15px` to maximize space for elements.
- **Font Size**:
  - Heading (`h2`): Scales down to a compact `16px` size.
  - Description: Set to `12px` for high readability in a tight space.
  - Price & Button: Price is `18px`, and button text is `12px`.
- **Layout**:
  - The card's button becomes **block-level** (`width: 100%`) so it spans the entire width of the card, making it much easier to tap on touchscreens.
  - If testing `responsive-layout.html`, the card switches layout direction from **horizontal row** (image beside details) to **vertical column** (image stacked on top of details), preventing cramped margins.
