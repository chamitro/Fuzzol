contract test { bytes a; bytes b; fallback() external { a == b; } }
