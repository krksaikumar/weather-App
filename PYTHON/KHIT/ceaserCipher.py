def encrypt(text, s):
    result = ""
    for i in range(len(text)):
        char = text[i]
        if char.isupper():
            result += chr((ord(char)+s-65)%26+65)
        else:
            result += chr((ord(char)+s-97)%26+97)
    return result
    
def decrypt(text, s):
    result = ""
    for i in range(len(text)):
       
    #efghijklmnopqrstuvwxyzabcd
        char = text[i]
        if char.isupper():
            result += chr((26+(ord(char)-s-65))%26+65)
        else:
            result += chr((26+(ord(char)-s-97))%26+97)
    return result
    
text = "abcdefghijklmnopqrstuvwxyz"
s=4
encrypted = encrypt(text, s)
print("encrypted : " + encrypted)

decrypted = decrypt(encrypted, s)
print("Decrypted : "+ decrypted)