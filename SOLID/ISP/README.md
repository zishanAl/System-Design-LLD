## Interface Segregation Principle (ISP)

### Definition
Clients should not be forced to depend on interfaces
they do not use.

In simple terms:
> Do not create large, fat interfaces.
> Prefer small, focused interfaces.

---

### Why ISP Matters
When a class is forced to implement methods it does not need:
- Code becomes confusing
- Empty or fake implementations appear
- Design becomes fragile

Following ISP leads to:
- Cleaner interfaces
- Better flexibility
- Easier maintenance

---

### Key Idea
Split large interfaces into smaller ones so that
classes only implement what they actually need.