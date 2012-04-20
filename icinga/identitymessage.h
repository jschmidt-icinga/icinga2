#ifndef IDENTITYMESSAGE_H
#define IDENTITYMESSAGE_H

namespace icinga
{

class I2_ICINGA_API IdentityMessage : public Message
{

public:
	IdentityMessage(void) : Message() { }
	IdentityMessage(const Message& message) : Message(message) { }

	inline bool GetIdentity(string *value) const
	{
		return GetDictionary()->GetValueString("identity", value);
	}

	inline void SetIdentity(const string& value)
	{
		GetDictionary()->SetValueString("identity", value);
	}
};

}

#endif /* IDENTITYMESSAGE_H */
