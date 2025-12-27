## Inheritance

### What is Inheritance?
Inheritance allows a derived class to be treated as
an instance of its base class, enabling polymorphism.

---

### Core Idea
Inheritance models a true **"is-a" relationship**.

If an object of the derived class cannot safely replace
an object of the base class, inheritance is incorrect.

---

### Why Study Inheritance?
- Enables runtime polymorphism
- Provides a common interface for related objects
- Helps model real-world hierarchies correctly

---

### Real-World Applications
- Payment systems (CreditCard, UPI, Wallet)
- Logging systems (FileLogger, DBLogger)
- UI components (Button, TextBox)

---

### When to Use Inheritance
- When derived objects can safely replace base objects
- When behavior is truly shared
- When polymorphism is required

---

### When NOT to Use Inheritance
- Only for code reuse
- When behavior differs significantly
- When composition is a better fit (Has-a relationship)

---

### Key Takeaway
Inheritance is about behavioral substitution,
not just sharing code.

---

### Summary
Inheritance defines an “is-a” relationship between classes, allowing child classes to reuse and extend the behavior of parent classes. It works like a family tree, where common characteristics are inherited while specialized behavior is added in derived types. By organizing related types into a hierarchy, inheritance reduces code duplication and enables substitution, making systems easier to structure and reason about.