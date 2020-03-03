/// See http://APIBook.com/ for the latest version.
///

#ifndef ADAPTER_H
#define ADAPTER_H

// forward declaration for the object wrapped by Adapter
class Original;

///
/// An Adapter that wraps access to an Original object.
///
class Adapter
{
public:
	Adapter();
	~Adapter();

	/// Call through to Original::DoSomething()
  bool doSomething(int value);

private:
	// prevent copying of this class because we had a pointer data member
	Adapter(const Adapter &);
	const Adapter &operator =(const Adapter &);

  Original *m_orig;
};

#endif
