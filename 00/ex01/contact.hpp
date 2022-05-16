#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{

private:

    std::string  firstName;
    std::string  lastName;
    std::string  nicName;
    std::string  phoneNumber;
    std::string  darkestSecret;

public:

    Contact(){};
    ~Contact(){};

    std::string GetFirstName() { return (firstName ); }
    std::string GetLastName() { return (lastName ); }
    std::string GetNicName() { return (nicName ); }
    std::string GetPhoneNumber() { return (phoneNumber ); }
    std::string GetDarkestSecret() { return (darkestSecret ); }

    void SetFirstName( std::string  value ) { firstName = value; }
    void SetLastName( std::string  value ) { lastName = value; }
    void SetNicName( std::string  value ) { nicName = value; }
    void SetPhoneNumber( std::string  value ) { phoneNumber = value; }
    void SetDarkestSecret( std::string  value ) { darkestSecret = value; }

};

#endif