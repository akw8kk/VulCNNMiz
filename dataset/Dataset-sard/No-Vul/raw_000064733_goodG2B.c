static void FUN1()
{
    int * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memcpy_34_unionType VAR2;
    int VAR3[50];
    int VAR4[100];
    
    VAR1 = VAR4;
    VAR2.VAR5 = VAR1;
    {
        int * VAR1 = VAR2.VAR6;
        {
            int VAR7[100] = {0}; 
            
            memcpy(VAR1, VAR7, 100*sizeof(int));
            FUN2(VAR1[0]);
        }
    }
}