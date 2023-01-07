static void FUN1()
{
    void * VAR1;
    VAR1 = NULL;
    VAR1 = FUN2(VAR1);
    {
        
        size_t VAR2 = wcslen((wchar_t *)VAR1);
        void * VAR3 = (void *)calloc(VAR2+1, sizeof(wchar_t));
        memcpy(VAR3, VAR1, (VAR2+1)*sizeof(wchar_t));
        FUN3((wchar_t *)VAR3);
        free(VAR3);
    }
}