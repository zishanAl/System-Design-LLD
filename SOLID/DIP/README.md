## Dependency Inversion Principle (DIP)

### Definition
High-level modules should not depend on low-level modules.
Both should depend on abstractions.

Abstractions should not depend on details.
Details should depend on abstractions.

---

### In Simple Words
- Do not tightly couple your core logic to concrete implementations
- Depend on interfaces, not on specific classes

---

### Why DIP Matters
Without DIP:
- Code becomes tightly coupled
- Changes in low-level code break high-level logic
- Testing becomes difficult

With DIP:
- Code is flexible
- Easy to extend and test
- Better long-term maintainability