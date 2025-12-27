## Encapsulation

### Definition
Encapsulation means bundling data and the methods
that operate on that data into a single unit (a class)
and restricting direct access to the data.

---

### In Simple Words
- Hide internal data
- Expose only what is necessary
- Protect object state from misuse

---

### Why Encapsulation is Required
Without encapsulation:
- Anyone can change internal state
- Objects can enter invalid states

Encapsulation ensures:
- Data safety
- Controlled state changes
- Protection of business rules

---

### Real-World Applications
- Banking systems (balance protection)
- Authentication systems (password hiding)
- Libraries and frameworks (safe APIs)
- Large codebases (safe collaboration)

---

### Key Idea
Encapsulation is not about making variables private.
It is about protecting invariants and enforcing rules.

### Summary
Encapsulation focuses on protecting an object’s internal data by enforcing strict access rules and preventing invalid states. It acts like a safety lock, ensuring that data cannot be modified directly or in unsafe ways. By controlling how internal state is accessed and updated, encapsulation prevents uncontrolled and unauthorized access, making objects safer, more predictable, and easier to maintain.