//Search:

							case 70102: // ����
							case 70103: // ����
								{
									if (GetAlignment() >= 0)
										return false;

									int delta = MIN(-GetAlignment(), item->GetValue(0));

									sys_log(0, "%s ALIGNMENT ITEM %d", GetName(), delta);

									UpdateAlignment(delta);
									item->SetCount(item->GetCount() - 1);

									if (delta / 10 > 0)
									{
										ChatPacket(CHAT_TYPE_TALKING, LC_TEXT("������ �������±�. ������ �������� ���𰡰� �� �������� �����̾�."));
										ChatPacket(CHAT_TYPE_INFO, LC_TEXT("����ġ�� %d �����Ͽ����ϴ�."), delta/10);
									}
								}
								break;


//Add below:

							case 2700:
								{
									if (GetTitle() == 4){
										ChatPacket(CHAT_TYPE_INFO,"Zaten ayn� tag� kullan�yorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(4);

									item->SetCount(item->GetCount() - 1);
								}
								break;
								
							case 2701: //Seri katil
								{
									if (GetTitle() == 5){
										ChatPacket(CHAT_TYPE_INFO,"Zaten ayn� tag� kullan�yorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(5);

									item->SetCount(item->GetCount() - 1);
								}
								break;
							case 2702: //D�v�� Ustas�
								{
									if (GetTitle() == 6){
										ChatPacket(CHAT_TYPE_INFO,"Zaten ayn� tag� kullan�yorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(6);

									item->SetCount(item->GetCount() - 1);
								}
								break;
							case 2703: //Kontrols�z G��
								{
									if (GetTitle() == 7){
										ChatPacket(CHAT_TYPE_INFO,"Zaten ayn� tag� kullan�yorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(7);

									item->SetCount(item->GetCount() - 1);
								}
								break;
							case 2704: //Defineci
								{
									if (GetTitle() == 8){
										ChatPacket(CHAT_TYPE_INFO,"Zaten ayn� tag� kullan�yorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(8);

									item->SetCount(item->GetCount() - 1);
								}
								break;
							case 2705: //Ara�t�rmac�
								{
									if (GetTitle() == 9){
										ChatPacket(CHAT_TYPE_INFO,"Zaten ayn� tag� kullan�yorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(9);

									item->SetCount(item->GetCount() - 1);
								}
								break;
							case 2706: //��renci
								{
									if (GetTitle() == 10){
										ChatPacket(CHAT_TYPE_INFO,"Zaten ayn� tag� kullan�yorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(10);

									item->SetCount(item->GetCount() - 1);
								}
								break;
							case 2707: //�aylak hediye tag
								{
									if (GetTitle() == 11){
										ChatPacket(CHAT_TYPE_INFO,"Zaten ayn� tag� kullan�yorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(11);

									item->SetCount(item->GetCount() - 1);
								}
								break;
							case 2708:
								{
									if (GetTitle() == 12){
										ChatPacket(CHAT_TYPE_INFO,"Zaten ayn� tag� kullan�yorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(12);

									item->SetCount(item->GetCount() - 1);
								}
								break;
							case 2709:
								{
									if (GetTitle() == 13){
										ChatPacket(CHAT_TYPE_INFO,"Zaten ayn� tag� kullan�yorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(13);

									item->SetCount(item->GetCount() - 1);
								}
								break;
							case 2710:
								{
									if (GetTitle() == 14){
										ChatPacket(CHAT_TYPE_INFO,"Zaten ayn� tag� kullan�yorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(14);

									item->SetCount(item->GetCount() - 1);
								}
								break;
							case 2711:
								{
									if (GetTitle() == 15){
										ChatPacket(CHAT_TYPE_INFO,"Zaten ayn� tag� kullan�yorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(15);

									item->SetCount(item->GetCount() - 1);
								}
								break;
							case 2712:
								{
									if (GetTitle() == 16){
										ChatPacket(CHAT_TYPE_INFO,"Zaten ayn� tag� kullan�yorsun.");
										return false;
									}
									DBManager::instance().DirectQuery("UPDATE player SET prestige = 0 WHERE id = %d", GetPlayerID());
									UpdateTitle(- GetTitle());
									UpdateTitle(16);

									item->SetCount(item->GetCount() - 1);
								}
								break;