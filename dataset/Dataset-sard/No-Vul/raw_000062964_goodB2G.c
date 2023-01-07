static void FUN1()
{
    int VAR1,VAR2;
    void * VAR3;
    VAR3 = NULL;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR3 = (void *)VAR4;
    }
    for(VAR2 = 0; VAR2 < 1; VAR2++)
    {
        {
            
            size_t VAR5 = wcslen((wchar_t *)VAR3);
            void * VAR6 = (void *)calloc(VAR5+1, sizeof(wchar_t));
            memcpy(VAR6, VAR3, (VAR5+1)*sizeof(wchar_t));
            FUN2((wchar_t *)VAR6);
            free(VAR6);
        }
    }
}