## Polymorphism

### What is Polymorphism?
Polymorphism allows different objects to respond
differently to the same function call through a common interface.

---

### Key Idea
Same interface.
Different behavior.
Decided at runtime.

---

### Why Polymorphism Matters
- Removes conditional logic
- Enables extensibility
- Works naturally with inheritance

---

### Important Notes
- Requires base-class pointers or references
- Requires virtual functions in C++
- Behavior is resolved at runtime

---

### Key Takeaway
Polymorphism is not enforced.
It is achieved through correct design.

---

### Summary
Polymorphism allows the same function call to produce different behavior depending on the object type, with the decision made at runtime. It works like a behavior switch, where the system automatically selects the correct behavior without the caller needing to know the specific object type. By enabling this flexibility, polymorphism eliminates the need to write separate, hard-coded logic for different but related object types, resulting in cleaner and more extensible code.