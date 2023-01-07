static void FUN1()
{
    int VAR1;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE129_fgets_67_structType VAR2;
    
    VAR1 = -1;
    {
        char VAR3[VAR4] = "";
        
        if (fgets(VAR3, VAR4, stdin) != NULL)
        {
            
            VAR1 = FUN2(VAR3);
        }
        else
        {
            FUN3("");
        }
    }
    VAR2.VAR5 = VAR1;
    FUN4(VAR2);
}