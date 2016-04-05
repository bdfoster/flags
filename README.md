Flags is a simple C++ script you can use to keep your boolean values for
your software. It is extremely simple, so much so that you may be
wondering why I even made it (I needed it... and a simple array wasn't
going to cut it).

Anyway, here's how to use it.

```
Flags flags = new Flags();
```

Inventive, I know...

To set a flag:
```
flags.set("logIt");
flags.read("logIt"); // true
flags.unset("logIt");
flags.read("logIt"); // false
```
That's great, but what if I didn't already set the flag?
Well, then it's false.
```
flags.read("noLog"); // false
```

Now, use it in our premade class:
```
class MyClass {
    public:
        Flags flag;

	MyClass (void): flags (new Flags()) {
	    // Preset some flags
            flag.set("readOnly");
            flag.set("async");
            flag.set("nonBlocking");

	    // Go on about your day...
	}

        void open (std::string, flags) {
            if (flag.read("readOnly") {
                ...
            } else {
                ...
            }
            ...
        }
};
```
And... that's it! Really simple, you don't need to know anything else.

Take a look at the well documented code in Flags.h

I'm always looking to do some optimization whilist making it easier to
use. You can open an issue at https://github.com/bdfoster/flags/issues
or send a pull request.
