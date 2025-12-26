## Single Responsibility Principle (SRP)

### Definition
A class should have **only one responsibility** and therefore **only one reason to change**.

In simple terms:
> One class should do one thing, and do it well.

---

### Why SRP Matters
When a class handles multiple responsibilities:
- It becomes hard to understand
- Changes in one responsibility can break others
- Testing and maintenance become difficult

Applying SRP leads to:
- Cleaner code
- Easier debugging
- Better extensibility

---

### Key Idea
If you can describe a class using **more than one responsibility**,  
it is likely violating SRP.