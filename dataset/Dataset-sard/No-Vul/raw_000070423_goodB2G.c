static void FUN1()
{
    void * VAR1;
    CWE122_Heap_Based_Buffer_Overflow__CWE135_34_unionType VAR2;
    VAR1 = NULL;
    {
        wchar_t * VAR3 = (wchar_t *)malloc(50*sizeof(wchar_t));
        wmemset(VAR3, VAR4'', 50-1);
        VAR3[50-1] = VAR4'';
        
        VAR1 = (void *)VAR3;
    }
    VAR2.VAR5 = VAR1;
    {
        void * VAR1 = VAR2.VAR6;
        {
            
            size_t VAR7 = wcslen((wchar_t *)VAR1);
            void * VAR8 = (void *)calloc(VAR7+1, sizeof(wchar_t));
            memcpy(VAR8, VAR1, (VAR7+1)*sizeof(wchar_t));
            FUN2((wchar_t *)VAR8);
            free(VAR8);
        }
    }
}