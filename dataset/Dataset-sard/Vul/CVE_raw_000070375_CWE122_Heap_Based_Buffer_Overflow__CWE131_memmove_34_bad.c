void FUN1()
{
    int * VAR1;
    CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_34_unionType VAR2;
    VAR1 = NULL;
    
    VAR1 = (int *)malloc(10);
    VAR2.VAR3 = VAR1;
    {
        int * VAR1 = VAR2.VAR4;
        {
            int VAR5[10] = {0};
            
            memmove(VAR1, VAR5, 10*sizeof(int));
            FUN2(VAR1[0]);
            free(VAR1);
        }
    }
}