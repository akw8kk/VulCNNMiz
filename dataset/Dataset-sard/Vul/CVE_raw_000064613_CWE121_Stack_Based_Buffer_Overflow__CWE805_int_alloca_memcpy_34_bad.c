void FUN1()
{
    int * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memcpy_34_unionType VAR2;
    int * VAR3 = (int *)FUN2(50*sizeof(int));
    int * VAR4 = (int *)FUN2(100*sizeof(int));
    
    VAR1 = VAR3;
    VAR2.VAR5 = VAR1;
    {
        int * VAR1 = VAR2.VAR6;
        {
            int VAR7[100] = {0}; 
            
            memcpy(VAR1, VAR7, 100*sizeof(int));
            FUN3(VAR1[0]);
        }
    }
}