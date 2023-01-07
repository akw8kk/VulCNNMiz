static void FUN1()
{
    void * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE135_34_unionType VAR2;
    VAR1 = NULL;
    
    VAR1 = (void *)VAR3;
    VAR2.VAR4 = VAR1;
    {
        void * VAR1 = VAR2.VAR5;
        {
            
            size_t VAR6 = wcslen((wchar_t *)VAR1);
            void * VAR7 = (void *)calloc(VAR6+1, sizeof(wchar_t));
            memcpy(VAR7, VAR1, (VAR6+1)*sizeof(wchar_t));
            FUN2((wchar_t *)VAR7);
            free(VAR7);
        }
    }
}