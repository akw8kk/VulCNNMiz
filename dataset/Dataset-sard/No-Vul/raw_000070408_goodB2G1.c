static void FUN1()
{
    void * VAR1;
    VAR1 = NULL;
    if(VAR2)
    {
        {
            wchar_t * VAR3 = (wchar_t *)malloc(50*sizeof(wchar_t));
            wmemset(VAR3, VAR4'', 50-1);
            VAR3[50-1] = VAR4'';
            
            VAR1 = (void *)VAR3;
        }
    }
    if(VAR5)
    {
        
        FUN2("");
    }
    else
    {
        {
            
            size_t VAR6 = wcslen((wchar_t *)VAR1);
            void * VAR7 = (void *)calloc(VAR6+1, sizeof(wchar_t));
            memcpy(VAR7, VAR1, (VAR6+1)*sizeof(wchar_t));
            FUN3((wchar_t *)VAR7);
            free(VAR7);
        }
    }
}