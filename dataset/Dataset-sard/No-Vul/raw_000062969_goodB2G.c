static void FUN1()
{
    void * VAR1;
    void * *VAR2 = &VAR1;
    void * *VAR3 = &VAR1;
    VAR1 = NULL;
    {
        void * VAR1 = *VAR2;
        
        VAR1 = (void *)VAR4;
        *VAR2 = VAR1;
    }
    {
        void * VAR1 = *VAR3;
        {
            
            size_t VAR5 = wcslen((wchar_t *)VAR1);
            void * VAR6 = (void *)calloc(VAR5+1, sizeof(wchar_t));
            memcpy(VAR6, VAR1, (VAR5+1)*sizeof(wchar_t));
            FUN2((wchar_t *)VAR6);
            free(VAR6);
        }
    }
}