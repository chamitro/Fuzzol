contract n
{
	fallback() external
	{
		// Used to cause a segfault
		(uint x, ) = (1);
		(uint z) = ();

		assembly {
			mstore(x, z)
		}
	}
}
// ----
