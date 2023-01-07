static void FUN1()
{
    void * VAR1;
    VAR1 = NULL;
    
    VAR1 = (void *)VAR2;
    {
        void * VAR3 = VAR1;
        void * VAR1 = VAR3;
        {
            
            size_t VAR4 = wcslen((wchar_t *)VAR1);
            void * VAR5 = (void *)calloc(VAR4+1, sizeof(wchar_t));
            memcpy(VAR5, VAR1, (VAR4+1)*sizeof(wchar_t));
            FUN2((wchar_t *)VAR5);
            free(VAR5);
        }
    }
}