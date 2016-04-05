#ifndef _FLAGS_H_
#define _FLAGS_H_

#include <vector>
#include <string>

class Flags {
    public:
        /**
         * Default constructor.
         *
         * @since       0.1.0
         */
        Flags (void);

        /**
         * Destructor.
         *
         * @since       0.1.0
         */
        virtual ~Flags (void);
    
        /**
         * Set flag specified to TRUE/On
         *
         * @param       flag        (const unsigned int) Flag.
         * @returns     (void)
         * @since       0.1.0
         */
        virtual void set(std::string flag);

        /**
         * Set flag specified to FALSE/Off
         *
         * @param       flag        (const unsigned int) Flag.
         * @returns     (void)
         * @since       0.1.0
         */
        virtual void unset (std::string flag);

        /**
         * Returns the value of the specified flag.
         *
         * @param       flag        (std::string) Flag.
         * @returns     (bool) The value of the flag.
         */
        virtual bool read (std::string flag);

        /**
         * Clears all flags.
         *
         * @returns     (void)
         * @since       0.1.0
         */
        virtual void clear (void);
        
    private:
        /**
         * Holds status of each flag.
         *
         * @since       0.1.0;
         */
        std::vector<bool> * _value;

        /**
         * Holds name of each flag.
         *
         * @since       0.1.0
         */
        std::vector<std::string> * _key;
};

#endif // _FLAG_H_
