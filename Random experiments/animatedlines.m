 robot = rigidBodyTree('DataFormat', 'column', 'MaxNumBodies',3);
            
            
            L1 = 160;
            L2 = 190;
            H = 250;
            
            body = rigidBody('link1');
            joint = rigidBodyJoint('joint1', 'revolute');
            setFixedTransform(joint,trvec2tform([0 0 H]));
            joint.JointAxis = [0 0 1];
            body.Joint = joint;
            addBody(robot, body, 'base');
            
            body = rigidBody('link2');
            joint = rigidBodyJoint('joint2','revolute');
            setFixedTransform(joint, trvec2tform([L1,0,0]));
            joint.JointAxis = [0 0 1];
            body.Joint = joint;
            addBody(robot, body, 'link1');
            
            body = rigidBody('link3');
            joint = rigidBodyJoint('joint3','prismatic');
            setFixedTransform(joint, trvec2tform([L2,0,0]));
            joint.JointAxis = [0 0 1];
            body.Joint = joint;
            addBody(robot, body, 'link2');
            
            
            body = rigidBody('tool');
            joint = rigidBodyJoint('fix1','fixed');
            setFixedTransform(joint, trvec2tform([0, 0, -150]));
            body.Joint = joint;
            addBody(robot, body, 'link3');
           
            
            ik = inverseKinematics('RigidBodyTree', robot);
           
            endEffector = 'tool';
          
            q0 = homeConfiguration(robot);
           
            
            t = (0:0.1:1)'; % Time
            x1 = 0;
            y1 = -200;
            x2 = 200;
            y2 = 0;
            
            X = x1 + t*(x2-x1);
            Y = y1 + t*(y2-y1);
            points = [X Y zeros(11,1)]
            
            qInitial = q0; % Use home configuration as the initial guess
            for i = 1:11
                % Solve for the configuration satisfying the desired end effector
                % position
                point = points(i,:)
                qSol = ik(endEffector,trvec2tform(point),weights,qInitial);
                % Store the configuration
                qs(i,:) = qSol;
                % Start from prior solution
                qInitial = qSol;
               
               
            end
            
            
            for i = 1:11
                
             show(robot,qs(i,:)')
            end
            
            
           
            
            
          