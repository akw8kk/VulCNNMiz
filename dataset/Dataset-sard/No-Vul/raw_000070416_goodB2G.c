static void FUN1()
{
    int VAR1,VAR2;
    void * VAR3;
    VAR3 = NULL;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        {
            wchar_t * VAR4 = (wchar_t *)malloc(50*sizeof(wchar_t));
            wmemset(VAR4, VAR5'', 50-1);
            VAR4[50-1] = VAR5'';
            
            VAR3 = (void *)VAR4;
        }
    }
    for(VAR2 = 0; VAR2 < 1; VAR2++)
    {
        {
            
            size_t VAR6 = wcslen((wchar_t *)VAR3);
            void * VAR7 = (void *)calloc(VAR6+1, sizeof(wchar_t));
            memcpy(VAR7, VAR3, (VAR6+1)*sizeof(wchar_t));
            FUN2((wchar_t *)VAR7);
            free(VAR7);
        }
    }
}