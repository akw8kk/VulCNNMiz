static void FUN1()
{
    void * VAR1;
    void * *VAR2 = &VAR1;
    void * *VAR3 = &VAR1;
    VAR1 = NULL;
    {
        void * VAR1 = *VAR2;
        {
            wchar_t * VAR4 = (wchar_t *)malloc(50*sizeof(wchar_t));
            wmemset(VAR4, VAR5'', 50-1);
            VAR4[50-1] = VAR5'';
            
            VAR1 = (void *)VAR4;
        }
        *VAR2 = VAR1;
    }
    {
        void * VAR1 = *VAR3;
        {
            
            size_t VAR6 = wcslen((wchar_t *)VAR1);
            void * VAR7 = (void *)calloc(VAR6+1, sizeof(wchar_t));
            memcpy(VAR7, VAR1, (VAR6+1)*sizeof(wchar_t));
            FUN2((wchar_t *)VAR7);
            free(VAR7);
        }
    }
}