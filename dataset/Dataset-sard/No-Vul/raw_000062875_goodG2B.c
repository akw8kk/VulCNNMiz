static void FUN1()
{
    int * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE131_memcpy_34_unionType VAR2;
    VAR1 = NULL;
    
    VAR1 = (int *)FUN2(10*sizeof(int));
    VAR2.VAR3 = VAR1;
    {
        int * VAR1 = VAR2.VAR4;
        {
            int VAR5[10] = {0};
            
            memcpy(VAR1, VAR5, 10*sizeof(int));
            FUN3(VAR1[0]);
        }
    }
}