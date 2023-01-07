
import os
from os.path import exists

def main():
    file_exists = os.path.exists("/Users/anniewatson/Downloads/VulCNN-main/forwardslicingdicts/CVE_raw_000071011_CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_63_bad.txt")

    print(file_exists)
    file = open("/Users/anniewatson/Downloads/VulCNN-main/forwardslicingdicts/CVE_raw_000071011_CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_cpy_63_bad.txt")
    for line in file:
        print(line)


if __name__ == '__main__':
    main()