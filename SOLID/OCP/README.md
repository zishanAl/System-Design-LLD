## Open/Closed Principle (OCP)

### Definition
Software entities (classes, modules, functions) should be
**open for extension but closed for modification**.

In simple terms:
> You should be able to add new behavior without changing existing code.

---

### Why OCP Matters
When existing code is modified repeatedly:
- Risk of introducing bugs increases
- Testing cost grows
- Code becomes fragile

Following OCP allows:
- Safer feature additions
- Better scalability
- Cleaner, extensible design

---

### Key Idea
Use **abstractions (interfaces / base classes)** so new behavior
can be added by creating new classes instead of modifying old ones.