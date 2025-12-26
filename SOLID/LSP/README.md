## Liskov Substitution Principle (LSP)

### Definition
Objects of a derived (child) class should be usable in place of
objects of the base (parent) class **without breaking the program**.

In simple terms:
> If a class B extends class A, then A can be replaced by B
> without changing the correct behavior of the system.

---

### Why LSP Matters
When LSP is violated:
- Inheritance becomes unsafe
- Unexpected runtime errors occur
- Code that depends on the base class breaks

Following LSP ensures:
- Reliable inheritance
- Predictable behavior
- Safer polymorphism

---

### Key Idea
A child class should **not weaken, remove, or contradict**
the behavior promised by the parent class.